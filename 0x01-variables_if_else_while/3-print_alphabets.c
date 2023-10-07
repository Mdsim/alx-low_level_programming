#include <stdio.h>
/**
 * main - entry
 *
 * Description: Program that prints
 * Capital and Small letter of an Alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i;

	for (i = 0; i <= 53; i++)
	{
		putchar(alph[i]);
	}
	return (0);
}
