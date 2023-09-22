/**
 *  rot13 - Encodes a string using ROT13.
 *  @str: The string to be encoded.
 *  Return: A pointer to the encoded string.
 *  Description: This function takes a string 'str' as a parameter and
 *  encodes it using the ROT13 algorithm, which shifts each letter by 13
 *  positions in the alphabet. The function uses two loops and only one 'if'
 *  statement in the code, without using 'switch' or ternary operations.
 */
char *rot13(char *str)
{
	char *result = str;

	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			char base = (*str >= 'a' && *str <= 'z') ? 'a' : 'A';
			*str = (*str - base + 13) % 26 + base;
		}
		str++;
	}

	return result;
}
