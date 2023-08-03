#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns square root of a number
 * @n: the number which we have to find the square root of
 * Return: square rooot of a natural number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - finds the root of a number
 * @n: the number whom we want the sqrt
 * @i: iterator
 * Return: the resulting sqrt
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
