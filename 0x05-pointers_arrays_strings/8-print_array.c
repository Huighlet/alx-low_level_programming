#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an arrya of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
	if (n <= 0)
	{
	printf("\n");
	return;
	}
	for(int i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i < n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}