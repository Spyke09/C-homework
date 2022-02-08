#include "stdio.h"
#include <stdlib.h>

int main()
{
    int sum = 0, c = 10;
    while(c){
        sum += c;
        --c;
    }
    
    printf("%d\n", sum);
    system ("pause");
    return 0;
}