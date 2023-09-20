#include <stdio.h>

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		*ptr = (*ptr >= 'a' && *ptr <= 'z') ? (*ptr - 'a' + 'A') : *ptr;
		ptr++;
	}

	return str;
}

int main()
{
	char str[] = "Hello, World!";
	printf("Original string: %s\n", str);

	string_toupper(str);
	printf("Uppercase string: %s\n", str);

	return 0;
}
