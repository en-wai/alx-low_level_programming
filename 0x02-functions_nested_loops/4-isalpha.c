#include "main.h"
/*
 * File: 4-_isalpha.c
 * Auth: En-wai Asare
 */


/**
 * _isalpha - Main entry point.
 * Description: Checks for alphabets.
 * @c: received int value
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

