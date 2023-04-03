#include "main.h"
/*
 * File: 1-alphabet.c
 * Auth: En-wai Asare
 */


/**
 * print_alphabet - Main entry point.
 * Description: Function to print lowercase alphabets 0
 * Return: Always void.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
