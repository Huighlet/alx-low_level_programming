#include <stdio.h>

char *_strncat(char *dest, const char *src, int n)
{
	char *original_dest = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	if (n > 0)
	{
		*dest = '\0';
	}

	return original_dest;
}

int main()
{
	char dest[50] = "Hello, ";
	const char src[] = "world!";

	_strncat(dest, src, 3);

	printf("Concatenated string: %s\n", dest);

	return 0;
}
