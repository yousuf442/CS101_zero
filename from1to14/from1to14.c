#include<stdio.h>
/*
 *main - prints numbers from 0 to 14
 * 
 * Return: allways 0
 * */
int main(void)
{
	int s = 1;

	while(s <= 10)
	{
		for(int v = '0';v <= '9'; v++)
		{
			putchar(v);
			putchar(10);
		}
		for(int b = '0'; b <= '4';b++)
		{
			putchar('1');
			putchar(b);
			putchar(10);
		}
		s++;
	}
}
