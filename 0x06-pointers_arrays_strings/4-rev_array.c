#include <stdio.h>

void reverse_array(int *a, int n)
{
	if (n <= 1)
		return;

	int *left = a;
	int *right = a + n - 1;
	int temp;

	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	reverse_array(arr, n);

	printf("\nReversed array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
