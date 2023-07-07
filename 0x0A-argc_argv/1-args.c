#include <stdio.h>
#include "main.h"


/**
* main - print no of arguments passed the program
* @argc: no of arguments
* @argv: array of the arguments
*
* Return: Always 0
*/


int main(int argc, char *argv[])

{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
