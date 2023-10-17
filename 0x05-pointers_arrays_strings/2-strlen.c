#include "main.h"
#include <string.h>
/**
 * _strlen - this function returns the length value of a string
 * @s: this is the interger
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
