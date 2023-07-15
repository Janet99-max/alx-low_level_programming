#include <stdio.h>
/**
 * main - function
 * Return: always 0
 */
int main(void)
{
	int num;
	int letters;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (letters = 97; letters <= 102; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
