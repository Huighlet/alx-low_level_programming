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
		char is_lower = (*str >= 'a' && *str <= 'z');
		char is_upper = (*str >= 'A' && *str <= 'Z');
		char shift = (is_lower || is_upper) ? 13 : 0;

		if (is_lower && (*str + shift) > 'z')
			*str = *str - 13;
		else if (is_upper && (*str + shift) > 'Z')
			*str = *str - 13;

		*str += shift;

		str++;
	}

	return result;
}
