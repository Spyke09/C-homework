#include "stdio.h"

int main()
{
    int temp;
    int st = 0, fn = 0, max = 0;
    printf("Enter numbers:\n");
    while (1){
        if (scanf("%d", &temp)!=1) break;
        fn++;
        if (temp%2) st = fn;
        if (max<fn-st) max = fn-st;
        /*printf("st: %d, fn: %d\n", st, fn);*/
    }
    printf("Result: %d", max);
    return 0;
}