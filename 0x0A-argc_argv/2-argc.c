#include <stdio.h>

/**
  *main - prints all arguments it receives.
  *@argc: number of arguments received.
  *@argv: array of size argc, containing all arguments received.
  *
  *Return: 0 on success.
  */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
