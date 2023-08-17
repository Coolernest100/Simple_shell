#include "shell.h"

/**
 * bfree - allows a pointer and NULLs the address
 * @ptr: the address of the pointer to allow
 *
 * Return: 1 if allowed, if not 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
