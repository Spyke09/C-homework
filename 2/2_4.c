#include "stdio.h"
#include <float.h>
#include "vector.c"
#define bool int
#define true 1
#define false 0


int main()
{
    double prev = DBL_MIN, temp;
    int count = 0;
    vector_int_t v;
    v_init(&v);
    printf("Enter numbers: \n");
    while(1){
        count++;
        if (scanf("%lf", &temp)!=1) break;
        if (temp<prev) v_push(&v, count);
        prev = temp;
    }
    printf("Indexes:\n");
    for (count = 0; count<v.len; ++count) printf("%d\n", v.data[count]);
    return 0;
}