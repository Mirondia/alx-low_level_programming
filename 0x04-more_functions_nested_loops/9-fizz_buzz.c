#include <stdio.h>

/**
 * main - fizbuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)

			printf("FizzBuzz ");

		else if (1 % 3 == 0)

			printf("Fizz ");

		else if (1 % 5 == 0)

			printf("Buzz ");

		else

			printf("%d ", i);

	}
	printf("Buzz\n");
	return (0);
}
