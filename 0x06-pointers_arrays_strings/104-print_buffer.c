#include <stdio.h>

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (int i = 0; i < size; i += 10)
	{
		printf("%.8x ", i);

		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%.2hhx", b[i + j]);
			}
			else
			{
				printf("  ");
			}

			if (j % 2 == 1)
			{
				printf(" ");
			}
		}

		printf(" ");

		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];
				if (c >= 32 && c <= 126)
				{
					printf("%c", c);
				}
				else
				{
					printf(".");
				}
			}
		}

		printf("\n");
	}
}

int main()
{
	char buffer[] = "This is a sample buffer for printing.";
	int size = sizeof(buffer) - 1;

	print_buffer(buffer, size);

	return 0;
}
