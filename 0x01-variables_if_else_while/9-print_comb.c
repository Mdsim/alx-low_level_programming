#include <stdio.h>
/**
 * main - Entrt
 *
 * Description: Program that print 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = i + 1;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	return 0;
}
