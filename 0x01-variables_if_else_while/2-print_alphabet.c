#include <stdio.h>
/**
 *main - all codes
 *Description: A program that prints alphabets in lowercase followed by line
* Return: 0
 */
int main(void)
{
char alphabets;
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
