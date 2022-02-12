#include "stdio.h"

int main()
{
    printf("Enter numbers:\n");
    double min_v = __DBL_MAX__, temp;
    int idx, count = 0;
    while(1){
        if (scanf("%lf", &temp)!=1) break;
        if (min_v>temp){
            min_v = temp;
            idx = count;
        }
        count++;
    }
    printf("Result: %d", idx);
    return 0;
}