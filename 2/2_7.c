#include "stdio.h"
#include "vector.c"

int main()
{
    int temp;
    int flag=0, len = 1;
    vector_int_t v_odd;
    vector_int_t  v_even;
    v_init(&v_odd); v_init(&v_even);
    printf("Enter numbers:\n");
    if (scanf("%d", &temp)!=1) return 0;
    flag = temp%2;
    while (1){
        if (scanf("%d", &temp)!=1) break;
        if (flag!=(temp%2)){
            v_push(flag?&v_odd:&v_even, len);
            len=0;
            flag = 1-flag;
        }
        len++;
    }
    v_push(flag?&v_odd:&v_even, len);
    printf("Result of even elements:\n");
    for (temp = 0; temp<v_even.len; temp++) printf("%d\n", v_even.data[temp]);
    printf("Result of odd elements:\n");
    for (temp = 0; temp<v_odd.len; temp++) printf("%d\n", v_odd.data[temp]);
    
    return 0;
}