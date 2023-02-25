#include "main.h"
#include <stdio.h>
/**
* main - “Fizz-Buzz test”
* Return: Always 0
*/
int main(void)
{
int one = 1;
for (; one < 100 ; one++)
{
if (one % 3 == 0 && one % 5 == 0)
printf("FizzBuzz ");
else if (one % 3 == 0)
printf("Fizz ");
else if (one % 5 == 0)
printf("Buzz ");
else
printf("%d ", one);
}
printf("Buzz\n");
return (0);
}
