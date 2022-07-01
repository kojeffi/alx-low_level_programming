#include <stdio.h>
/**
 *main - return the results of thr function
*Description: print the hexadecimal numbers
*Return: return the integer value 0
*/
int main(void)
{
int num;
char alphabet;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
