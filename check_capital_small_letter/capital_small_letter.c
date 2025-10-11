#include<stdio.h>
#include "ctype.h"
/**
 * main - check if the lettet is capital or not
 *
 * Return: 1 if the lettet is capital.and 0 if the lettet is small
 */
int main(void)
{
	char g;

	printf("put your character\n");
	scanf("%c", &g);
	if (isupper(g))
	printf("%c: 1", g);
	else if (islower(g))
	printf("%c: %d", g, isupper(g));
}
