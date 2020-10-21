#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: input parameter for name
* @f: repr function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
{
		f(name);
}
}
