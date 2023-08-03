#include <stdio.h>
#include "main.h"
/**
 * 0-puts_recursion - it is a function that writes string
 * @s: our character input
 * Return: 0 is always success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
		_putchar('\n');
}
