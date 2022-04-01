#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
int args = argc - 1;
printf("%d\n", args);
return (0);
}
