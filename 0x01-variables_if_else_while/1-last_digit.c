#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a text according numbers
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n, lastd;
	Srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = % 10;
	if (lastd > 5 )
	{
	printf("Last digit of %d is %d and is 0\n", n, last)
	}
	else if (lastd = = 0)
	{
	printf("Last digit of %d is %d is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
