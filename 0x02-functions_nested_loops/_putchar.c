#include <unistd.h>
#include "main.h"

/*
 * creat the function _putchar
 * Return: On success 0.
 * Return: on error 1
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
