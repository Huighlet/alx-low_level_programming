#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	for (int i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return true;
		}
	}
	return false;
}

char *cap_string(char *str)
{
	bool new_word = true;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			new_word = true;
		}
		else if (new_word && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			new_word = false;
		}
		else
		{
			new_word = false;
		}
	}

	return str;
}

int main()
{
	char str[] = "hello, world! this is a test string.";

	printf("Original string: %s\n", str);

	cap_string(str);

	printf("Capitalized string: %s\n", str);

	return 0;
}
