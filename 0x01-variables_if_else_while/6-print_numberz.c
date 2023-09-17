#include <stdio.h>
/**
 *main - print all the single digit numbers
 *Return: Always (success)
 *
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10; n++)

	putchar(n + '0');
	putchar('\n');

	return (0);
}
