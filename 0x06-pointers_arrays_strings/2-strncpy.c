#include <stdio.h>

char *_strncpy(char *dest, const char *src, int n)
{
	char *original_dest = dest;

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}

	return original_dest;
}

int main()
{
	char dest[50];
	const char src[] = "Hello, world!";

	_strncpy(dest, src, 5);

	printf("Copied string: %s\n", dest);

	return 0;
}
