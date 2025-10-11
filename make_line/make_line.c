#include<stdio.h>
/*
 *print_line - makes a new line
 * 
 * Return: nothing
 * */
void print_line(int n)
{

	for(int i = 1;i <= n;i++)
	{
		putchar(95);
	}
	putchar(10);

}
/*
 * main - cal)
 * {calls the function print_line
 *
 * Return: allways 0
 * */
int main(void)
{
	int n;

	scanf("%i", &n);
	print_line( n);

}
