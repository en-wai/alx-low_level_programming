/*
 * File: 7-print_tebahpla.c 
 * Auth: En-wai Asare
 */

#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
