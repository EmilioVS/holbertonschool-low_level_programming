#include "main.h"
/**
 *print_alphabet_x10 - Ejercicio 2
 */
void print_alphabet_x10(void)
{
int number;
char abc;
for (number = 0; number <= 9; number++)
for (abc = 'a'; abc <= 'z'; abc++)
_putchar(abc);
_putchar('\n');
}
