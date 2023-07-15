#include <stdio.h>
/**
 * main - character
 * Return: always 0;
 */
int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb + 48);
	}
	putchar('\n');
	return (0);
}
