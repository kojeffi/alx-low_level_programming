#include <stdio.h>
/**
 *main - return integal of 0
 *Description: print the size of diffirent characters and words
*Return: Always succes return o
 */
int main(void)

{

	printf("Size of a char: %ld byte(s)\n", sizeof(char));

	printf("Size of an int: %ld byte(s)\n", sizeof(int));

	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));

	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));

	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);

}
