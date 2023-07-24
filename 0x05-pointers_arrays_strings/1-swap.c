#include <stdio.h>
/**
 * swap_int - swap two numbers
 * @a: value a to b
 * @b: value b to a
 * return: swaped numbers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
