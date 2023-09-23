/**
 * cap_string - Capitalizes all words in a string.
 *  @str: The string to be modified.
 *  Return: A pointer to the modified string.
 *  Description: This function takes a string 'str' as a parameter and
 *  capitalizes the first letter of each word in the string.
 *  Words are separated by the following characters: space, tab, newline,
 *  comma, semicolon, period, exclamation mark, question mark, double quote,
 *  opening parenthesis, closing parenthesis, and opening curly brace.
 */
char *cap_string(char *str)
{
	char *result = str; /* Store the original pointer to the string */
	int capitalize_next = 1;

	while (*str != '\0')
	{
		if (capitalize_next && (*str >= 'a' && *str <= 'z'))
		{
			/* Capitalize the first letter of the word */
			*str = *str - 'a' + 'A';
			capitalize_next = 0;
		}
		else if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' ||
				*str == ';' || *str == '.' || *str == '!' || *str == '?' || *str == '"' ||
				*str == '(' || *str == ')' || *str == '{')
		{
			/* Set the flag to capitalize the next character */
			capitalize_next = 1;
		}
		else
		{
			/* Clear the flag for other characters */
			capitalize_next = 0;
		}

		str++; /* Move to the next character in the string */
	}

	return (result); /* Return a pointer to the modified string */
}
