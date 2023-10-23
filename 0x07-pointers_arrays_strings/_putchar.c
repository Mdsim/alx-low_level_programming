#include "mainh.h"
#include <unistd>
/**
 * _putchar - write the character c to stdout
 * @c: C is the character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropritely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
