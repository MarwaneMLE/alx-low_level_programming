#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: string
 * @c: to find in string
 * Retur: first occurrence of the character c in string or NULL
 */ 
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
