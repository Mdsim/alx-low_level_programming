#include <stdio.h>
/**
 * _islower - check if char is lower case
 * @c: iw character to be checked
 * Return: 1 if char is lowercase otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
