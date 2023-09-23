#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int max_len = len1 > len2 ? len1 : len2;

	if (size_r <= max_len + 1)
		return 0;

	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = num1 + num2 + carry;
		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
		i--;
		j--;
	}

	r[k] = '\0';

	for (int start = 0, end = k - 1; start < end; start++, end--)
	{
		char temp = r[start];
		r[start] = r[end];
		r[end] = temp;
	}

	return r;
}

int main(void)
{
	char num1[] = "123456789";
	char num2[] = "987654321";
	char result[20];

	char *sum = infinite_add(num1, num2, result, sizeof(result));
	if (sum)
	{
		printf("Sum: %s\n", sum);
	}
	else
	{
		printf("Result cannot be stored in the buffer.\n");
	}

	return 0;
}
