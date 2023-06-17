#include <stdio.h>
/**
 * main - prints the alphabet in reverse(from z to a).
 * Return: 0 if success.
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
