#include <stdio.h>
/**
 * main - prints all alphabets in lowercase except letters q and e.
 * Return: 0 on success.
 */
int main(void)
{
        char c = 'a';

        while (c <= 'z')
        {
                if(c!='q' && c!='e')
		{
			putchar(c);
		}
                c++;
        }
	return (0);
}
