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
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(alph[i]);
	}
	return (0);
}
