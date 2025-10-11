#include<stdio.h>
/**
 * print_chessboard - prints chess board
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;

	int j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
	if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
		{
			(*a)[j] = '#';
			printf("%c", (*a)[j]);
		}
		else
		{
			(*a)[j] = ' ';
			printf("%c", (*a)[j]);
		}
	}
			printf("\n");
	}
}
/**
 * main - checks the code
 *
 * Return: Allways 0
 */
int main(void)
{
	char (*a)[8];

	print_chessboard(a);
}
