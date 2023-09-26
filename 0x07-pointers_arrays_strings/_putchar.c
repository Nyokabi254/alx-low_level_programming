#include "main.h"
#include "unistd.h"
/**
 * _putchar - writes the characteer c to stdout
 * @c: the characteer to print
 * Return: on success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
