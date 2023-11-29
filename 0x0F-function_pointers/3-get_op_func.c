#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - returns pointer to right op func
 * @s: string operator
 * Return: the right function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
}
