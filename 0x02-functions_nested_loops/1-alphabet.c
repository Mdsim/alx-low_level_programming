#include "main.h"
/**
 * main - entry
 * Description: A program that print alphabets
 * in small letter
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
