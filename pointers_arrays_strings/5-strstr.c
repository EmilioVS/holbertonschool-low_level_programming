#include "main.h"
#include <stdio.h>
/**
* _strstr - locates a substring.
* @haystack: input string to search in
* @needle: input string to locate into string haystack
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
twoo++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}
