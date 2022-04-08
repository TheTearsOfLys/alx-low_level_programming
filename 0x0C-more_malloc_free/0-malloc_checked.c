#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory or exit with status value 98
 **/

void *malloc_checked(unsigned int b)
{

	void *pointer;

	pointer = malloc(b); /*allocate memory the size of b to pointer*/
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer); /*return pointer to allocated memory*/
