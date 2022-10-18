/*
 * File: 0-putchar.c
 * Auth: En-wai Asare
 */

#include <main.h>

/**
 * main - Prints out _putschar.
 *
 * Return: Always 0.
 */
int main(void)
{
	char b[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(b[c]);
	}
	_putchar('\n');
	return (0);
	}
}
