#include "main.h"
#include <ctype.h>


/**
 * main - prints the alphabet,
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar (c) ;
	}
	putchar('\n');
	return (0);
}
