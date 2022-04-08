#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * char *string_nconcat - function concatenates two strings 
 * @s1 - pointer to first string
 * @s2 - pointer to second string
 * @n - the first number of bytes in s2 (size limit)
 * if n is equal to the length of s2, use all of s2 in the concatenation 
 * return: pointer to newly allocated space
 */

char *string_nconcat((char *s1, char *s2, unsigned int n)
{

