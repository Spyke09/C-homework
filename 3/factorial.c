#include "stdio.h"

int factorial(int n)
{
    if (n<0) return -1;
    static int counter = 0;
    ++counter;
    if (n==1 || n==0) {
        printf("%d function call, n == %d, factorial == %d\n", counter, n, 1);
        return 1;
    }
    int res = n*factorial(n-1);
    printf("%d function call, n == %d, factorial == %d\n", --counter, n, res);
    return res;
}

int main(){
    factorial(10);
}