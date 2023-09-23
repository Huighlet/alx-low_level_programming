#include <stdio.h>

int main(void)
{
	/* Add one line of code here */
	int a[5] = {0, 1, 2, 3, 4};
	int *p;

	p = a;

	int result = *(p + 2);
	write(1, "a[2] = ", 7);
	write(1, &result, 1);
	write(1, "\n", 1);

	/* Description: This is a sample C program that demonstrates
	 * * how to access and print the value of an element in an array
	 * * using a pointer. It prints "a[2] = 98" followed by a new line.
	 * */

	return (0);
}
