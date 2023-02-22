#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
	int _isalpha(int b)
{
	if (((b >= 'a') && (b <= 'z')) || ((b >= 'A') && (b <= 'Z')))
		return (1);
	else
		return (0);
}
