#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 * Description: This function prints the content of 'size' bytes of the buffer 'b'
 * in a specific format. Each line shows the position of the first byte in hexadecimal,
 * followed by the hexadecimal content (2 bytes at a time), and then the character
 * representation of the bytes. Lines are formatted with 10 bytes per line.
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", b[i + j]);
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

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
				{
					printf("%c", b[i + j]);
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
