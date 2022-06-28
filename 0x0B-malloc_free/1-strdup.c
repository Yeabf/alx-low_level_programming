#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 * @str: a string to be duplicated
 *Return: null if str is null
 */

char *_strdup(char *str)
{
	char sr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	sr = (char *)malloc(sizeof(char) * (i + 1);

	if (sr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		sr[j] = str[j];

	return (sr);
}
