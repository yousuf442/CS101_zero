#include <stdio.h>
#include <stdlib.h>
/*
 * main - do a mathimatical operation
 * 
 * Return: Allways 0
 */
int main(int argc , char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	if(argc != 3)
		printf("Error\n");
	else
		printf("%d\n", x * y);
}
