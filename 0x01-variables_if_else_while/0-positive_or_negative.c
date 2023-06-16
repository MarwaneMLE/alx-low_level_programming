#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Determines if generated number is positive, null or negative.
 * Return: (0) is success.
 */
int main(void)
{
	int n;
	/* Use current time as seed for random generator */
	srand(time(0));
	/* rand(): generates a random number from "0" to RAND_MAX */
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
