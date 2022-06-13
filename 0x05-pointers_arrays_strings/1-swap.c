#inculde "main.h"
/**
 *swap_int- swaps values
 *@a: integer 1
 *@b: integer 2
 *Return: is void
 */
void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
