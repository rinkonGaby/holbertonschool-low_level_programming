#include <stdio.h>
/**
 * main - prints the alfabet
 * Return: Always 0 (Success)
 */
int main ()
{
  char c;
  for (c = 'a' ; c <= 'z' ; c++)
	putchar (c);
  putchar('\n');
  return 0;
}
