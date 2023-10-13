#include "main.h"
#include <stdio.h>
/**
 * _isupper - check for upper case
 * @c: is the interger
 * Returns: 1 if c is uppercase and 0 if not
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}
