#include "main.h"
#include<stdio.h>
/**
* print_alphabet - print alphabet
* Return: always return 0 upon success
**/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar (ch);
}
_putchar ('\n');
}
