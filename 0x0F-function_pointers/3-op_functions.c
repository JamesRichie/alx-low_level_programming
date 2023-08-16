#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the differnce of two numbers
 * @a - first number
 * @b - second number
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a - first number
 * @b - sec number
 * Return: The multiple of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a - First number
 * @b - Seconf number
 * Return: The division of a by b
 */
int op_div(int a, int b)
{
	return (a * b);
}

/**
 * op_mol - The remainder of the division of to numbers
 * @a: First number
 * @b: Second number
 * Return: The remainder of the division of a by b
 */
int op_mol(int a, int b)
{
	return (a % b);
}
