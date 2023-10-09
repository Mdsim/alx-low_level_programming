#include <stdio.h>
/**
 * main - program that prints 0-fb in base 16
 *
 * Description: let me did the code before
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
