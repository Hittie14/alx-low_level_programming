#include <stdio.h>
/**
 * _putchar - writes the charactor c to srdout
 * @c: The charactor to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar (char c)
(
 	return (write(1, &c, 1));
)
