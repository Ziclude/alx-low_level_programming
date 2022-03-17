#include "main.h"
#include <stdio.h>

/**
 * main - take the fizz-buzz test
 *
 * Return: Always 0
 */

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
_putchar("FizzBuzz");
else if ((num % 3) == 0)
_putchar("Fizz");
else if ((num % 5) == 0)
_putchar("Buzz");
else
_putchar("%d", num);
if (num == 100)
continue;
_putchar(" ");
}
_putchar("\n");

return (0);
}
