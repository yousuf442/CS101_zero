#include<stdio.h>
/*
 * main - check code
 *
 * Return: allways 0
 *
 */
int main(void)
{
	unsigned long long n;

	scanf("%llu", &n);
	unsigned long long z = 1;

	unsigned long long x = 2;

	unsigned long long y;

	while (1)
	{
		for (long int k = 2; k <= (x - 1); k++)
		{
			if (x % k != 0)
				z = k;
			else
				break;
		}
		if (z == (x - 1))
		{
			if (n % x == 0)
			{
				n /= x;
				y = x;
			}
			else
			{
				x++;
				continue;
			}
			if (n == 1)
			break;
		}
		else
		{
			x++;
			 continue;
		}
	}
	printf("the largest prime factor is %llu\n", y);
}










