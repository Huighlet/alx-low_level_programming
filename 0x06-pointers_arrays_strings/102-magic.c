#include <stdio.h>

int main(void)
{
	int a[5] = {98, 97, 99, 100, 101};
	int *p = a;

	*(p + 2) = 98;
	printf("a[2] = %d\n", *(p + 2));
	return (0);
}
