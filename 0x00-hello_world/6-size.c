#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int  main(void)
{

	printf("size of a char: %c bytes\n", sizeof(char));
	printf("size of an int: %i bytes\n", sizeof(int));
	printf("size of a long int: %ld bytes\n", sizeof(long int));
	printf("size of a long long int: %li bytes\n", sizeof(long long int));
	printf("size of a float: %f bytes\n");

	return (0);
}
