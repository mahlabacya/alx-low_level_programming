#include <unistd.h>

/**
 * _putchar.c - writes the character c to stdout
 * @c: The character tp print 
 * Return: On success 1.
 * On error, -1 is returned, and errono is set appropriately.
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
