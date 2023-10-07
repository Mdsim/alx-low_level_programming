#include <stdio.h>
/**
 * main - entry
 *
 * Description: Alhphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char teb[26] = "zyxwvutsrqponmlkjihgfedcba";
		int i;

	for (i = 0; i < 26; i++)
	{
		putchar(teb[i]);
	}
	putchar('\n');
	return (0);
}
