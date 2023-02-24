#include "main.h"
/**
* _isdigit - That checks if a character is a digit
*@c: Is the number that haves to be checked
*Return: 1 for a character that will be a digit 0 or for any else
*/
int _isdigit(int c)
{
if (c >= 40 && c <= 57)
{
return (1);
}
return (0);
}
