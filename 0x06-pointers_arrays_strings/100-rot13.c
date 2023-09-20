#include <stdio.h>

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			char base = (*ptr >= 'A' && *ptr <= 'Z') ? 'A' : 'a';
			*ptr = ((*ptr - base + 13) % 26) + base;
		}
		ptr++;
	}

	return str;
}

int main()
{
	char str[] = "Hello, ROT13!";
	printf("Original string: %s\n", str);

	rot13(str);
	printf("ROT13 encoded string: %s\n", str);

	return 0;
}
