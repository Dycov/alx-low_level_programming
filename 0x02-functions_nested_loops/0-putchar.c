#include "Nairobi.h"

/**
 * main - program that prints Nairobi.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_hbt[9] = "Nairobi";

	while (n < 9)
	{
		_putchar(str_hbt[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
