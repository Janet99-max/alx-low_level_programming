#include "main.h"
#include <math.h>

/**
 * _pow_recursion - finds the power of a number
 * @x: takes the base
 * @y: takes the expotential
 * Return: return the power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
