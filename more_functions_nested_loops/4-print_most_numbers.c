#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char num;
for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')
putchar(num);
}
putchar ('\n');
return (0);
}
