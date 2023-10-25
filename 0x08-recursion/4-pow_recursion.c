#include "main.h"

/**
 * _pow_recursion - function that returns the value of x pow of y
 *
 * @x:takes the number
 * @y: takes the pow
 * Return: return the value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
