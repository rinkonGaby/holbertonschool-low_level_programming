#include "main.h"

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */

void print_alphabet_x10(void)
{
	char c;
	int r;
	for (r = 0; r <= 10; c++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c) ;
		}
		_putchar('\n');
	}
}
