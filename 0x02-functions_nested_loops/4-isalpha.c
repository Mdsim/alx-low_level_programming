#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * Return:  1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
		return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
