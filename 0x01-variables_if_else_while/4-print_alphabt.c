#include <stdio.h>
/**
 * main - print the alphabet letters
 *
 * Description: print the alphabet letters
 * except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 97;
while (i < 123)
{
if (i != 101 && i != 113)
{
putchar(i);
}
i++;
}
putchar(10);

return (0);
}
