#include <stdio.h>
/**
 * main - A program  prints the size of various computer types
 * Return: 0 (success when the 0 is returned)
 */

int main(void)
{
char q;
int w;
long int e;
long long int r;
float t;

printf("Size of a char: %lu byte(s)\n", (unsigned long)
sizeof(q));
printf("Size of an int: %lu byte(s)\n", (unsigned long)
sizeof(w));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)
sizeof(e));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)
sizeof(r));
printf("Size of a float: %lu byte(s)\n", (unsigned long)
sizeof(t));
return (0);
}
