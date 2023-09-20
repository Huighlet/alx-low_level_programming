#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;

	int i = 0;
	int j = 0;
	int k = 0;

	while (n1[i] != '\0' || n2[j] != '\0' || carry)
	{
		int num1 = (n1[i] != '\0') ? n1[i] - '0' : 0;
		int num2 = (n2[j] != '\0') ? n2[j] - '0' : 0;

		int sum = num1 + num2 + carry;

		if (k < size_r - 1)
		{
			r[k] = (sum % 10) + '0';
			k++;
		}
		else
		{
			return (0);
		}

		carry = sum / 10;

		if (n1[i] != '\0')
			i++;
		if (n2[j] != '\0')
			j++;
	}

	r[k] = '\0';

	return r;
}

int main()
{
	char n1[] = "123456789";
	char n2[] = "987654321";
	char result[11];

	if (infinite_add(n1, n2, result, sizeof(result)))
	{
		printf("Sum: %s\n", result);
	}
	else
	{
		printf("Result does not fit in the buffer.\n");
	}

	return 0;
}
