include "main.h"

/**
 * print_alphabet - entry point
 * Return: 0
 */
void print_alphabet(void);

int main(void)
{
	void print_alphabet(void)
	{
		ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}


	return (0);
}
