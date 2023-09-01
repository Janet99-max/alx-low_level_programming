#include "main.h"
/**
 * binary_to_uint - the function that converts binary to decimal
 * @b: contains 0 or 1
 * Return: the int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary2int = 0;

	if (b == 0)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		binary2int = binary2int * 2 + (*b - '0');
		b++;
	}
	return (binary2int);
}
