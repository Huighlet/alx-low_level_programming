/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The integer array to be reversed.
 * @n: The number of elements in the array.
 * Description: This function takes an integer array 'a' and its length 'n'
 * as parameters and reverses the order of the elements in the array 'a'.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		/* Swap elements at start and end positions */
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		/* Move the pointers towards the center of the array */
		start++;
		end--;
	}
}
