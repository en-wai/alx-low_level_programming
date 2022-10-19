#include "main.h"
/*
 * File: 2-print_alphabet_x10.c
 * Auth: En-wai Asare
 */


/**
 * print_alphabet_x10 - Main entry point.
 * Description: Multiply the alphabets by 10.
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
	{
			_putchar(c);
	}
		_putchar('\n');
		i++;
	}
}

