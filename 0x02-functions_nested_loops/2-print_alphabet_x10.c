#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *Return: The alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
char c;
int count;
for (count = 0; count < 10; count++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
