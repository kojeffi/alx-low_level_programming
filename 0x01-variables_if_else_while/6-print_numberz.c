#include <stdio.h>
/**
 *main - print digit from 1 to 10
 *Description: return the results from a for loop
*Return: return integer value  0
 **/
int main(void)
{
int begin = 0;
for (begin = 0; begin < 10; begin++)
{
putchar(begin + '0');
}
putchar('\n');
return (0);
}
