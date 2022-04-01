#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: character to checked for digit membership
 *
 * Return: 1 if it is digit, 0 if not
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
