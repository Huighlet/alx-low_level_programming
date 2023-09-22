/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be modified.
 * Return: A pointer to the modified string.
 * Description: This function takes a string 'str' as a parameter and
 * changes all lowercase letters in the string to uppercase
 */
char *string_toupper(char *str)
{
	char *result = str; // Store the original pointer to the string

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			/* Convert lowercase letters to uppercase */
			*str = *str - 'a' + 'A';
		}
		str++; // Move to the next character in the string
	}

	return result; // Return a pointer to the modified string
}
