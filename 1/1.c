#include "stdio.h"
#include <stdlib.h>

int main()
{
    int age_years;
    printf("Enter age: ");
    scanf("%d", &age_years);
    printf("Age in years: %d\nAge in days: %d\n", age_years, age_years*365);
    system ("pause");
    return 0;
}