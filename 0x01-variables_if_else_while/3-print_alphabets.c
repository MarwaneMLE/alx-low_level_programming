#include <stdio.h>
/**
 * main - prints the alphabet in lowercase followed by uppercase.
 * Return: 0 on success.
 */
int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		c++;
	}
	putchar('\n');
	return (0);
}
