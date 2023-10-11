#include "main.h"
/**
 * main - entry
 *
 * Description: void print_alphabet(void):wq
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
