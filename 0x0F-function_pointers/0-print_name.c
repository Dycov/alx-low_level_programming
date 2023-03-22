#include <stdio.h>
#include "main.h"

/**
 * print_name - calls another function to print name
 * @name: pointer to string name to print
 * @f: pointer to function that prints
 * Return: void
 */

int main()
void print_name(char *name, void (*f)(char)
		
{
	if (name && f)
		f(name)

	return(0)
}
