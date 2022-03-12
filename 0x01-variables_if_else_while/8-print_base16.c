#include <stdio.h>

/**
 * main - print single digits of base 16 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digit;
	char storeDigit[];

	for (digit = '0'; digit <= 9; digit++)
		storeDigit [digit] = digit;
		putchar(storeDigit);

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');
	return (0);
}
