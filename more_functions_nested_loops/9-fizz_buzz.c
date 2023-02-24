#include "main.h"
#include <stdio.h>
/**
* main - The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who
can’t seem to program their way out of a wet paper bag.
* Return: empty
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
