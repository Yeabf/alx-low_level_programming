#include "main.h"
/**
 * *_memcpy- copies memory area
 * @dest: destination memory area
 * @src; origin area
 * @n: amount of bytes written
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
unsigned int i;
for (i = 0 ; n > 0 ; i++, n--)
{
dest[i] = src[i];
}
return (dest)
}

