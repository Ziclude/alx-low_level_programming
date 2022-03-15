#include "main.h"
/**
 * print_alphabet - print the alphabet
 *
 * Description: print the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
