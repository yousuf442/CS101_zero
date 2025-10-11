#include<stdio.h>
#include<string.h>
/**
 * *_memcpy - copies some characters from a string to another
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	strncpy(dest, src, n);

	*(dest + n) = '\0';
	
	for (i = 0; i < n; i++)
		printf("%c", *(dest + i));

		printf("\n");
	return (dest);
}
/**
 * main - check the code
 *
 * Return: Allways 0
 */
int main(void)
{
	char s [1024];

	char *ss = s;

	char t [1024];

	char *tt = t;

	int k;

	printf("put your sring\n");

	fgets(s, sizeof(s), stdin);
	printf("put the number of characters you want to move\n");

	scanf("%d", &k);
	_memcpy(tt, ss, k);
}
