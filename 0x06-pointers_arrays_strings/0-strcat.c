#include <stdio.h>

char *_strcat(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}
	
	*dest = '\0';

	return original_dest;
}

int main()
{
	char dest[50] = "Hello, ";
	const char src[] = "world!";

	_strcat(dest, src);

	printf("Concatenated string: %s\n", dest);

	return 0;
}
