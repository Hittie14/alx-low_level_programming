#include <stdio.h>
/**
 * main - prints numbers between 0 to 9 and letters between a to f.
 *
 */
int main(void)
{
	int i;
	for (i = 48; i < 58; i++)
	{
		putcahr(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}