#include "main.h"

/**
 * _strlen: return length of string
 * @s: string to count length
 * Return the length of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
