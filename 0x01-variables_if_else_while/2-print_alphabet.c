#include <stdio.h>
#include <stdlib.h>
/*
 * main: prints loweecase of alphabet.
 * Return: (0) if success.
 */
int main(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		putchar(c);
		c++; 
	}
	print("\n");
	return (0);
}
