#include "stdio.h"
#include <stdlib.h>

double binpower(double x, int y)
{
    double res = 1;
    while(y)
        if (y&1){
            res *= x;
            --y;
        } else {
            x *= x;
            y >>= 1;
        }
    return res;
}

int main()
{
    double x; int y;
    printf("Enter base and degree: ");
    scanf("%lf %d", &x, &y);
    printf("%.3f\n", binpower(x,y));
    system("pause");
    return 0;
}