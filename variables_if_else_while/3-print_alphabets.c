#include<stdio.h>
#include<stdint.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char abc = 'a';
while (abc <= 'z')
{
putchar(abc);
abc++;
}
{
char ABC = 'A';
while (ABC <= 'Z')
{
putchar(ABC);
ABC++;
}
putchar('\n');
}
return (0);
}
