/*
 * File: 4-print_alphabt.c
 * Auth: En-wai Asare
 */

#include <stdio.h>

/**
 * main - Print the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
