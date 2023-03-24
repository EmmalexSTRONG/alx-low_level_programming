#include "main.h"

/**
 * print_triangle of squares according parameter
 * @size: The size of the squares traingle
 * Return: empty
 */

void print_traingel(int size)

{
	int x, y, z;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	-putchar(32);
	}
	for (z = 0; z <= x; z++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
