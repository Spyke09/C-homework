#include "stdio.h"
#include <stdlib.h>

int main()
{
    int sum = 0;
    printf("Enter numbers: \n");
    for (int i = 0; i < 5; ++i){
        int temp; scanf("%d", &temp);
        sum+=temp;
    }
    printf("Mean: %.3f\n", sum/5.0);
    system ("pause");
    return 0;
}