#include "main.h"

/**
 * _isalpha - i need to write a function that checks alphabetic character
 * @c: This is the character that needs to be checked 
 * Return: 1 for alphabetic character or 0 for any other thing
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	return (0);
}
