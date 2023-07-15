#include <stdio.h>
/**
 * main - main function
 * Return: is always 0
 */
int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
