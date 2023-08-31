#include "main.h"

/**
 * flip_bits - returns the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, counter = 0;
	unsigned long int current_val;
	unsigned long int exclusive = n ^ m;

	for (j = 63;  j >= 0; j--)
	{
		current_val = exclusive >> j;
		if (current_val & 1)
			counter++;
	}

	return (counter);
}
