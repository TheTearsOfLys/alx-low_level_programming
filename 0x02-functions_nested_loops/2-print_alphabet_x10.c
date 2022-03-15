#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet
 *
 * Return: Always 0
 */

void main(void)
{
	int i; alphabet;

	for (i = 0; i < 10; i++)
	{
	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	}
}
	
