#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - our entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d n is positive\n", n);
	else if (n == 0)
		printf("%d is 0\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
