#include<stdio.h>
#define absolute(x) ((x > 0) ? x : -x)
/**
 * main - check the code
 *
 * Return: Allways 0
 */
int main(void)
{
	int x;

	printf("put your number\n");
	scanf("%d", &x);
	printf("the absolute value of %d is %d\n", x, absolute(x));
	return (0);
}
