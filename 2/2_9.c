#include "stdio.h"

int main()
{
    int temp, prev = 0;
    int st = 0, fn = 1, max = 0, idx = 0, idxm = 0, c=0;
    printf("Enter numbers:\n");
    if (scanf("%d", &prev)!=1) return 0;
    while (1){
        c++;
        if (scanf("%d", &temp)!=1) break;
        if (prev!=temp) {
            if (max<fn-st){ 
                max = fn-st;
                idxm = idx;
            }
            idx = c;
            st = fn;
        }
        printf("Index: %d, MaxIndex: %d, MaxLen: %d\n", idx, idxm, max);
        fn++;
        prev = temp;
    }
    if (max<fn-st){
        max = fn-st;
        idxm = idx;
    }
    printf("Index: %d\n", idxm);
    printf("Max len: %d", max);
    return 0;
}