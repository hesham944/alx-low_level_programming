#include <stdio.h>
/**
 *main - print the alphabet in lowercase and uppercase
 *Return: Always (success)
 *
 */
int main(void)
{
	int ch;
	int c;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	putchar(ch);

	for (c = 'A' ; c <= 'Z' ; c++)

	putchar('\n');

	return (0);
}
