#include<stdio.h>
/*
 * main - check if the number is divisable br 3 or 5
 *
 * Return: allways 0
 *
 */
int main(void)
{
	for (int v = 1; v <= 100; v++)
	{
		if (v % 3 == 0 && v % 5 == 0)
			printf("FizzBuzz ");
		else if (v % 3 == 0)
			printf("Fizz ");
		else if (v % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", v);
	}
}
