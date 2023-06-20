#include <unistd.h>
/**
 * _putchar -Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On Success 1.
 * on error, -1 is returned, and errno is not appropriately.
 */
int _putchar(char c)
(       
 return (write(1, &c, 1));
)