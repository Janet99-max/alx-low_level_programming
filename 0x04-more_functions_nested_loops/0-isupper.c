#include "main.h"
/**
 * isupper - checks weather the case is upper case
 * Return: 1 if it is true
 * Return: 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
