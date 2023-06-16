#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 * Return: (0) if success.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++; 
	}
	printf("\n");
	return (0);
}
