#ifndef _CALC_
#define _CALC_

#include<stdio.h>
#include<stdlib.h>


/**
 * struct op - the operations structure
 *
 * @op: the operetion
 * @f: the associated function
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
