#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generation and print password for crackme5
 * @argc: Arguments number supplied to the program.
 * @argv: Pointers array to arguments
 * Return: 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
char pwd[7], *cop;
int ln = strlen(argv[1]), a, top;
cop = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
top = (ln ^ 59) & 63;
pwd[0] = cop[top];
top = 0;
for (a = 0; a < ln; a++)
top += argv[1][a];
pwd[1] = cop[(top ^ 79) & 63];
top = 1;
for (a = 0; a < ln, a++)
top *= argv[1][a];
pwd[2] = cop[(top ^ 85) & 63];
top = 0;
for (a = 0; a < ln; a++)
{
if (argv[1][a] > top)
top = argv[1][a];
}
srand(tmp ^ 14);
pwd[3] = cop[rand() & 63];
top = 0;
for (a = 0; a < ln; a++)
top += (argv[1][a] * argv[1][a]);
pwd[4] = cop[(top ^ 229) & 63];
for (a = 0; a < argv[1][0]; a++)
top = rand();
pwd[5] = cop[(top ^ 239) & 63];
pwd[6] = '\0';
printf("%s", pwd);
return (0);
}
