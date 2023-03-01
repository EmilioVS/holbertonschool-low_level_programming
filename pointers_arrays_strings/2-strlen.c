#include "main.h"
/**
* _strlen - returns the length
*@s: string
*Return: length
*/
int _strlen(char *s)
{
int longitud = 0;
while (*s != '\0')
longitud++;
*s++;
return (longitud);
}
