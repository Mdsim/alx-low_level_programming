#include "main.h"
#include <stdio.h>
/**
 * swap_int - this swap the value of a and b
 * @a: is the first int
 * @b: the second intger
 * Return: Nothint
 */
void swap_int(int *a, int *b);
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
