#include "3-calc.h"

/**
 * op_add - calculates sum of a and b
 * @a: 1st integer operand
 * @b: 2nd integer operand
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference of a and b
 * @a: 1st integer operand
 * @b: 2nd integer operand
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product of a and b
 * @a: 1st integer operand
 * @b: 2nd integer operand
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates division of a and b
 * @a: 1st integer operand
 * @b: 2nd integer operand
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of a and b
 * @a: 1st integer operand
 * @b: 2nd integer operand
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
