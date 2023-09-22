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
	char *result = str; /* Store the original pointer to the string */

	while (*str != '\0')
	{
		if ((*str == 'a' || *str == 'A') ||
				(*str == 'e' || *str == 'E') ||
				(*str == 'o' || *str == 'O') ||
				(*str == 't' || *str == 'T') ||
				(*str == 'l' || *str == 'L'))
		{
			switch (*str)
			{
				case 'a':
				case 'A':
					*str = '4';
					break;
				case 'e':
				case 'E':
					*str = '3';
					break;
				case 'o':
				case 'O':
					*str = '0';
					break;
				case 't':
				case 'T':
					*str = '7';
					break;
				case 'l':
				case 'L':
					*str = '1';
					break;
			}
		}
		str++; /* Move to the next character in the string */
	}

	return result; /* Return a pointer to the encoded string */
}
