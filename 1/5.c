#include "stdio.h"
#include <stdlib.h>

int main()
{
    int chislo;
    printf("Enter number: ");
    scanf("%d", &chislo);
    printf(chislo%2 ? "Odd\n": "Even\n");
    system ("pause");
    return 0;
}