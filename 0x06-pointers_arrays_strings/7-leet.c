#include <stdio.h>

char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "AaEeOoTtLl";
	char *leet_replacements = "44330771"; // Corresponding replacements

	while (*ptr)
	{
		for (int i = 0; leet_chars[i]; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_replacements[i];
				break;
			}
		}
		ptr++;
	}

	return str;
}

int main()
{
	char str[] = "leet encoding example";
	printf("Original string: %s\n", str);

	leet(str);
	printf("1337 encoded string: %s\n", str);

	return 0;
}
