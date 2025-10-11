#include<stdio.h>
#define SUM(x, y) (x + y)
/**
 * main - check the code
 *
 * Return: Allways 0
 */
int main(void)
{
	double x;

	double y;

	printf("put your 2 numbers\n");
	scanf("%lf %lf", &x, &y);
	printf("the sum of %lf and %lf is %lf", x, y, SUM(x, y));
	 return (0);
}
