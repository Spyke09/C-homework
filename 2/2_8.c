#include "stdio.h"
#include "vector.c"

int main()
{
    int temp;
    int flag=0, len = 1;
    vector_int_t v;
    v_init(&v);
    printf("Enter numbers:\n");
    int st = 0, fn = 1, prev = __INT_MAX__;
    while (1){
        if (scanf("%d", &temp)!=1) break;
        if (prev>=temp) {
            if (fn-st!=1) v_push(&v, fn-st);
            st = fn;
        }
        fn++;
        prev = temp;
    }
    if (fn-st!=1) v_push(&v, fn-st);
    printf("Result of even elements:\n");
    for (temp = 0; temp<v.len; temp++) printf("%d\n", v.data[temp]);

    return 0;
}