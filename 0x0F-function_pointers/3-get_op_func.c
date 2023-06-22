#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - searches and selects the correct function to
 * perform the operation asked by the user.
 * @s: pointer to the operator string
 * Return: function pointer that points to various operation functions
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (i < 6 && ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
