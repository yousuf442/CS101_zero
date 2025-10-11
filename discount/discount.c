#include<stdio.h>
/**
 * main - count the previous price
 *
 * Return: Allways 0
 */
int main(void)
{
	printf("put discount precent\n");
	double dis;

	scanf("%lf", &dis);
	printf("put its price after the discount\n");
	double price_after;

	scanf("%lf", &price_after);
	double price_before = price_after / (1 - (dis / 100));

	printf("price before the discount is %lf\n", price_before);
}
