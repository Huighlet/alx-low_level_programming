/**
 * _strncat - Concatenates two strings with a specified limit.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to copy from src.
 * Return: A pointer to the resulting concatenated string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest; /* Store the original pointer to dest */

	/* Move dest pointer to the end of the destination string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy characters from src to dest, up to n bytes or until src ends */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Null-terminate the concatenated string */
	*dest = '\0';

	return (result);
}
