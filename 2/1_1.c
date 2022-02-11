#include "stdio.h"

int main()
{
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n)!=1 || n<=0) {
        printf("Invalud number entry");
        return 0;
    }
    printf("Enter numbers of:\n");
    int sum = 0;
    int temp;
    while(n--){
        if (scanf("%d", &temp)!=1) {
            printf("Invalud number entry");
            return 0;
        }
        sum+=temp;
    }
    printf("Sum: %d", sum);
    return 0;
}