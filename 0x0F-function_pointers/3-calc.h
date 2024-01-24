#ifndef "CALC_H"
#define "CALC_H"

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

#endif
