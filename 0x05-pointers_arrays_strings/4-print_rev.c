#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverses string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);

	}
	putchar('\n');
}

