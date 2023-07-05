#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: input string
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return (longi);
}
