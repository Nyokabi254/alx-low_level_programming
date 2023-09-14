#include "main.h"
/**
 * isupper - checks if a letter is upper
 * x - the letter to be checked
 * return 1 for upper letter or 0 if else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
