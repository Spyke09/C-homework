#include <stdio.h>
#include "vector.h"

int _vector_expand(char** data, int *len, int *maxlen, int size)
{
    if (*len+1>*maxlen){
        int n = *maxlen==0 ? 1 : *maxlen*2;
        void *p = realloc(*data, n * size);
        if (p==NULL) return -1;
        *data = p;
        *maxlen = n;
    }
    return 0;
}

int _vector_insert(char** data, int *len, int *maxlen, int size, int idx)
{
    int error = _vector_expand(data, len, maxlen, size);
    if (error) return error;
    if (idx >= *len) return -1;
    memmove(*data + (idx + 1) * size, *data + idx * size, (*len - idx) * size);
    return 0;
}

int _vector_pop(char** data, int *len, int *maxlen, int size, int idx)
{
    if (idx >= *len) return -1;
    memmove(*data + idx * size, *data + (idx + 1) * size, (*len - idx - 1) * size);
    return 0;
}



