#include <stdio.h>
#include "main.h"
/**
 * factorial - this is the function that finds factorial of a number
 * @n: the interger containing the factorial
 * Return: -1 if its false and the actual values if it is true
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
