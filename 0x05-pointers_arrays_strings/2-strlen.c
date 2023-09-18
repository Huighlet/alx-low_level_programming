#include "main.h"
/**
 * _strlen - Return the length of a string.
 * @s: Pointer to the string.
 * Return: the length of the string (excluding the null terminator).
 */
int -strlen(char *s)
{ 
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	
	return length;
}
