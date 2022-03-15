#include <stdio.h>
/**
 * main - prints founded 98 first fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int count;
unsigned long i, j, k;
unsigned long m, n, p, car;
count = 0;
i = 0;
j = 1;
for (count = 1; count <= 91; count++)
{
k = i + j;
i = j;
j = k;
printf("%lu, ", k);
}
m = i % 1000;
i = i / 1000;
n = j % 1000;
j = j / 1000;
while (count <= 98)
{
car = (m + n) / 1000;
p = (m + n)-car * 1000;
k = (i + j)+car;
m = n;
n = p;
i = j;
j = k;
if (p >= 100)
printf("%lu%lu", k, p);
else
printf("%lu0%lu", k, p);
if (count != 98)
printf(", ");
count++;
}
putchar('\n');

return (0);
}
