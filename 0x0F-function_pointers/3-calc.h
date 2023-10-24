#ifndef THREE_CALC_H
#define THREE_CALC_H

/**
* struct op - Struct op
* @op: The operator
* @x: The function associated
*/
typedef struct op
{
char *op;
int (*x)(int y, int z);
} G_t;

int op_add(int y, int z);
int op_sub(int y, int z);
int op_mul(int y, int z);
int op_div(int y, int z);
int op_mod(int y, int z);
int (*get_op_func(char *s))(int, int);

#endif
