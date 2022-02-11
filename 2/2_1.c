#include "stdio.h"


int main()
{
    double temp, sum = 0;
    int count = 0;
    printf("Enter numbers: \n");
    while(1){
        if (scanf("%lf", &temp)!=1) break;
        count++;
        sum+=temp;
    }
    printf("Sum: %.3f\n", sum);
    printf("Amount: %d\n", count);
    return 0;
}