#include "main.h"

int real_prime_number(int n, int i);

/**
 * is_prime_number - function that returns prime number
 * @n: the integer that should be verified if its a prime number
 * Return: the prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime_number(n, n - 1));
}

/**
 * real_prime_number - the function
 * @n: the integer
 * @i: iterator
 * Return: prime number
 */
int real_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime_number(n, i - 1));
}
