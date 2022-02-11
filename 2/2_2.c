#include "stdio.h"
#define bool int
#define true 1
#define false 0

int main()
{
    double k, temp;
    int number = 0, result = -1;
    bool flag = true;
    printf("Enter k: \n");
    scanf("%lf", &k);
    printf("Enter numbers: \n");
    while(1){
        number++;
        if (scanf("%lf", &temp)!=1) break;
        if (flag && temp>k){
            flag = false;
            result = number;
        }
    }
    printf("Result: %d\n", result);
    return 0;
}