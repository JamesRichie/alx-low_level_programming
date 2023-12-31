#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function that performs
 *               the operation selected by the user.
 * @s: Operator passed as argument.
 * op_mod - Gives ramainder of a division
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
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

	int r = 0;

	while (ops[r].op != NULL && *(ops[r].op) != *s)
		r++;

	return (ops[r].f);
}
int op_mod(int a, int b)
{
	return (a % b);
}
