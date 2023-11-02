#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charcter to std out
 * @c: charcter to print
 *
 * Return: On succes (1)
 * On error, -1 is return and errno is approprietly
 */
int _putchar(char)
{
	return(write(1, &c, 1));
}
