#include "main.h"
/**
  *main-entry point
  *Return: must return
  */
void print_alphabet_x10(void)
{
	int k;
	int q;
	for (k = 1; k <= 10; k++)
	{
		for (q = 97; q <= 122; q++)
		{
			_putchar(q);
		}
	}
	_putchar('\n');
}
