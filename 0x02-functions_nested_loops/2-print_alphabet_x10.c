include "main.h"

/**
 * main - print_alphabet_x10 - print a - z ten times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int num = 0;

	while ((num <= 9) && (ch <= 'z'))
	{
		_putchar(ch);
		num++;
		ch++;

	}

	_putchar('\n');
}
