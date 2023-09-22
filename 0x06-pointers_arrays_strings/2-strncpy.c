/**
 * _strncpy - Copies a string up to a specified number of characters.
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy from src.
 * Return: A pointer to the beginning of the copied string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest; /* Store the original pointer to dest */

	/* Copy characters from src to dest, up to n bytes or until src ends */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* If n is greater than the length of src, pad dest with null characters */
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return result; /* Return a pointer to the beginning of the copied string */
}
