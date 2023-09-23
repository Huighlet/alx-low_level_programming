/**
 *leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 * Description: This function takes a string 'str' as a parameter and
 * replaces specific letters in the string with their corresponding 1337
 * equivalents. The replacements are as follows:
 * - Letters 'a' and 'A' are replaced with '4'.
 * - Letters 'e' and 'E' are replaced with '3'.
 * - Letters 'o' and 'O' are replaced with '0'.
 * - Letters 't' and 'T' are replaced with '7'.
 * - Letters 'l' and 'L' are replaced with '1'.
 * The function uses only one 'if' statement and two loops in the code.
 * No 'switch' or ternary operations are allowed.
 */
char *leet(char *str)
{
	char *result = str;

	while (*str != '\0')
	{
		if (*str == 'a' || *str == 'A')
			*str = '4';
		else if (*str == 'e' || *str == 'E')
			*str = '3';
		else if (*str == 'o' || *str == 'O')
			*str = '0';
		else if (*str == 't' || *str == 'T')
			*str = '7';
		else if (*str == 'l' || *str == 'L')
			*str = '1';

		str++;
	}

	return (result);
}
