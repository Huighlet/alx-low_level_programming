#include <unistd.h>

void print_digit(int n)
{
	char digit = n + '0';
	write(1, &digit, 1);
}

void print_number(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}

	print_digit(n % 10);
}

int main()
{
	int number = 12345;
	print_number(number);
	write(1, "\n", 1);
	return 0;
}
