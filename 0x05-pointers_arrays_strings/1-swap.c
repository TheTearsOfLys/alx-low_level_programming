#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a and @b - input
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int newA = *b;
	int newB = *a;

	*a = newA;
	*b = newB;
}
