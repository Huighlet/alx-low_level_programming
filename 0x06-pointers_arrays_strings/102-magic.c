#include <stdio.h>
/**
 * main - Entry point
 * Description: This is a sample C program that demonstrates
 * how to access and modify elements of an array using a pointer.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p;

	p = a;

	/* Add one line of code here */
	*(p + 2) = 98;

	printf("a[2] = %d\n", a[2]);

	return (0);
}
