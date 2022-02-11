#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>
#include <string.h>

#define _vector_t(T) struct{T *data; int len; int maxlen;}
#define v_init(v) memset((v), 0, sizeof(*(v)))
#define v_clear(v) ( free((v)->data), v_init(v) ) 

#define _vector_args(v) (char**)(&(v)->data), &(v)->len, &(v)->maxlen, sizeof(*(v)->data)


#define v_push(v, val) (_vector_expand(_vector_args(v)) ? -1 :((v)->data[(v)->len++] = (val), 0), 0)

#define v_insert(v, idx, val) (_vector_insert(_vector_args(v), idx) ? -1 :((v)->data[idx] = (val), (v)->len++, 0))

#define v_pop(v, idx) (_vector_pop(_vector_args(v), idx) ? -1 :(v)->len--, 0)

#define v_find(v, val, idx) for ((idx) = 0; (idx) < (v)->len; (idx)++) {if ((v)->data[(idx)] == (val)) break;} if ((idx) == (v)->len) (idx) = -1;

int _vector_expand(char** data, int *len, int *maxlen, int size);
int _vector_insert(char** data, int *len, int *maxlen, int size, int idx);
int _vector_pop(char** data, int *len, int *maxlen, int size, int idx);

typedef _vector_t(int) vector_int_t;
typedef _vector_t(char) vector_char_t;
typedef _vector_t(char*) vector_str_t;
typedef _vector_t(double) vector_double_t;

#endif

