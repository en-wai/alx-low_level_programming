#include "main.h"
/*
 * File: 1-alphabet.c
 * Auth: En-wai Asare
 */


/**
 * main - Prints out _putschar.
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter <= 'z');
		letter++;
	}
	_putchar('\n');
}
