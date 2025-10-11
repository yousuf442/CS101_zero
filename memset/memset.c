#include<stdio.h>
/**
 * _memset - fills a memory
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	*(s + i) = b;
	return s;
}
/**
 * main - check the code
 *
 * Return: Allways 0
 */
int main(void)
{
	char a;

	unsigned int l;

	unsigned int i;

	char arr[1024562];

	char *r = arr;

	printf("put the character\n");
	scanf("%c", &a);
	printf("put the number of bytes\n");
	scanf("%u", &l);
	_memset(r, a, l);
	for (i = 0; i < l; i++)
		printf("%c", arr[i]);
	printf("\n");
	return (0);
}
