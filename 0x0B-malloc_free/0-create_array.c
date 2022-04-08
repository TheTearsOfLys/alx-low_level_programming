#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array created
 * @c: char to be used in initializing
 * Return: pointer to array or null (if size is 0 or if it fails)
 **/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int ArrayPosition;

	if (size == 0) 
	{
		return (NULL);
	}
	
	array = malloc(sizeof(char) * size); 
	if (array == NULL)//hits null char at the end of string?
	{
		return (NULL);
	}
	ArrayPosition = 0;
	while (ArrayPosition < size)
	{
		array[ArrayPosition] = c; //loop through array until '\0'
		ArrayPosition++;
	}
	return (array);
}
