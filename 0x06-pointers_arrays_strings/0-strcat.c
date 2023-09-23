/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * Return: A pointer to the resulting concatenated string (dest).
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest; /* Store the original pointer to dest */

	/* Move dest pointer to the end of the destination string */
	while (*dest != '\0')
		dest++;

	/* Copy characters from src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Null-terminate the concatenated string */
	*dest = '\0';

	return (result);
}
