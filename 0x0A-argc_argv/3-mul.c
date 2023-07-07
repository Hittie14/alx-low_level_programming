#include <stdio.h>
#include "main.h"
/**
* _atoi - converts string to the integer
* @s:the string to be converted
*
* Return: an int converted from the string
*/
int _atoi(char *s)
{
int a, b, c, len, d, digit;
a = 0;
b = 0;
c = 0;
len = 0;
d = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (a < len && f == 0)
{
if (s[a] == '-')
++d;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (d % 2)
digit = -digit;
c = c * 10 + digit;
d = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
f = 0;
}
a++;
}
if (d == 0)
return (0);
return (c);
}
/**
* main - multiplies the two numbers
* @argc: no of arguments
* @argv: an array of the arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
