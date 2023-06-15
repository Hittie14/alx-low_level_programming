#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on..
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %Zu byte(s)\n", sizeof(char));
	printf("Size of a int: %Zu byte(s)\n", sizeof(int));
	printf("Size of long int: byte(s)\n", sizeof(long int));
	printf("Size of long long int: byte(s)\n", sizeof(long long int));
	printf("Size of a float: byte(s)\n", sizeof(float));
	return(0);
}


