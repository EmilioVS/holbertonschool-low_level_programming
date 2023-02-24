#include "main.h"
/**
*times_table - Write a function that prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int number, m, p;
for (number = 0; number <= 9; number++)
{
_putchar('0');
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
p = number * m;
if (p <= 9)
_putchar(' ');
else
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
