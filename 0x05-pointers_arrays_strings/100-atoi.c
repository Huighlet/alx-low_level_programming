#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: Pointer to the string to be converted.
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int digit_found = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (2147483647 - (s[i] - '0')) / 10)
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		result = result * 10 + (s[i] - '0');
		i++;
		digit_found = 1;
	}
	if (i == 0)
	{
		return (0);
	}
	if (!digit_found)
	{
		return (0);
	}
	return (result * sign);
}
