#include "main.h"

/**
 * *_strbrk - search strings for any set of bytes
 * @s: strings to be matched
 * @accept: bytes containing the matched
 * Return: pointer p is not null 
 */

char *_strbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
