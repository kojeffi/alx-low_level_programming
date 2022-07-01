#include <stdio.h>
#include <ctype.h>
/**
*main - return the required output
*Description: print a to z in upper and lower
 *Return: return integer value 0
 */
int main(void)
{
char alphabet;
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(tolower(alphabet));
}
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
