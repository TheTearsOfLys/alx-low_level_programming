#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet
 *
 * Return: void.
 */

void main(void)
{
	int i;
	int alphabet;

	for (i = 0; i < 10; i++)
	{
	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n);
	}
}
	
