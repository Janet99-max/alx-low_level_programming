#include "main.h"
/**
 * isdigit - a function that returns digits
 * Return: 1 if a number is a digit
 * Return: 0 if it is not a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
