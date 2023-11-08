#include "function_pointers.h"

/**
 * print_name- function that prints name
 *
 * @name: takes input
 * @f: funtion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
