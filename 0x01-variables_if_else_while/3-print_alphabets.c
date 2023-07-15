#include <stdio.h>
/**
 * main - our main function
 * Return: always 0
 */
int main(void)
{
	int small = 97;
	int cap = 65;

	while (small <= 122)
	{
		putchar(small);
		small++;
	}
	while (cap <= 90)
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
