#include <stdio.h>
/**
 * main - prints the alphabet in lowercase followed by uppercase.
 * Return: 0 on success.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
