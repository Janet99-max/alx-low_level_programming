#include "main.h"
/**
 * print_alphabet - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
