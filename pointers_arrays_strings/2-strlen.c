#include "main.h"
/**
* _strlen - returns the length
*@s: string
*Return: length
*/
int _strlen(char *s)
{
  int longitud = 0;
  for (*s != '\0');
    {
      longitud++;
    }
  return (longitud);
}
