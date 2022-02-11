#include "stdio.h"
#define min(a, b) ((a)<(b) ? (a) : (b))

int main()
{
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n)!=1 || n<=0) {
        printf("Invalud number entry");
        return 0;
    }
    printf("Enter numbers of:\n");
    int min_v = 0;
    int temp;
    while(n--){
        if (scanf("%d", &temp)!=1) {
            printf("Invalud number entry");
            return 0;
        }
        min_v = min(min_v, temp);
    }
    printf("Minimum value: %d", min_v);
    return 0;
}