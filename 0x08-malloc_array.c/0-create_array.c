#include <stdlib.h>

/**
 * *create_array - creates array of chars
 *Return: Null if size 0
 *@size: size of array
 *@c: character to be initialized
 */

char *create_array(unsigned int size, char c)
{
	char *ca;
	unsigned int i;

	if (size == 0)
	return (NULL);

	ca = malloc(size * (sizeof(c)));

	if (ca == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
		ca[i] = c;
	return (ca);
}
