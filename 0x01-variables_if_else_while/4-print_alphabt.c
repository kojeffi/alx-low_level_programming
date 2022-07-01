#include <stdio.h>
#include <ctype.h>
/**
 *main - return alphabets expect e and q
 *Description: print the required results
 *Return: integer value 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
