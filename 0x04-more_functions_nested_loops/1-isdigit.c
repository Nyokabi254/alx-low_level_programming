#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @x - the character to be checked
 * return (1) if digit or (0) if else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return(1);
	}
	return (0);
}

