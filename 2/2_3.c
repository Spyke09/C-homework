#include "stdio.h"
#include <float.h>
#define bool int
#define true 1
#define false 0

int main()
{
    double prev = DBL_MIN, temp;
    bool flag = true;
    printf("Enter numbers: \n");
    while(1){
        if (scanf("%lf", &temp)!=1) break;
        if (temp<prev) flag = false;
        prev = temp;
    }
    printf("Result: %s", flag? "Yes":"No");
    return 0;
}