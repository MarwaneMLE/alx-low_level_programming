#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:number to print in binary
 * @index:starting from 0 of the bit you want to get
 * Returns: the value of the bit at index index or -1 if an error occured
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> i;

		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
