#include "main.h"
/**
* print_alphabet - prints the alpha in lowercase
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
_putchar('\n');
}
}
