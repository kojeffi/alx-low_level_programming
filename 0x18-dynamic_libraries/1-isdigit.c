#include "main.h"
/**
*_isdigit - Check for digits 0 through 9
*@c: int type parameter
*Return: 1 if digit, else, return 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
