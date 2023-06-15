#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on..
 * Return: Always 0.
 */
int main(void)
{
	int a;
	char b;
	long c;
	long long d;
	float e;

        printf("Size of a char: %Zu byte(s)\n", sizeof(char));
        printf("Size of an int: %Zu byte(s)\n", sizeof(int));
        printf("Size of long int: %Zu byte(s)\n", sizeof(long int));
        printf("Size of long long int: %Zu byte(s)\n", sizeof(long long int));
        printf("Size of a float: %Zu byte(s)\n", sizeof(float));
        return(0);
}
