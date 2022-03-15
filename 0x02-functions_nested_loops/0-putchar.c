#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the word _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char name[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');
	return (0);
}
