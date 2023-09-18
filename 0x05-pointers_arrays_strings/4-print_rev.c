#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return length;
}
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
