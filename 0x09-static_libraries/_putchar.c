#include <unistd.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Description: Prints putchar
 *
 * Return: 0 (Success)
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
