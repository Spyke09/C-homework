#include "stdio.h"

int count_space(char *p)
{
    int res = 0;
    for (; *p!='\0'; p++)
        if (*p==' ') res++;
    return res;
}

int main()
{
    printf("%d\n", count_space("dsjf sd fsdf "));
    printf("%d\n", count_space("du  a   asd asd"));
    return 0;
}