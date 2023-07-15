#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int num = 122;

	while (num >= 97)
	{
		putchar(num);
		num--;
	}
	putchar('\n');
	return (0);
}
