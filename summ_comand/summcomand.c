#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/*
 * main - do a multiblication operation
 *
 * Return: Allways 0
 */
int main(int argc, char *argv[])
{
	int i,j;
	
	int sum=0;

	for(i = 1; i < argc ; i++)
	{
		if(argc != 1)
		{
	for(j = 0; argv[i][j] != '\0'; j++)
	{
		if(isdigit(argv[i][j]))
		{
		if(atoi(argv[i]) > 0)
		sum += atoi(argv[i]);
		
		else
		printf("Error\n");
		}
		else
		printf("0\n");
	}
	}
}
printf("%d\n", sum);
}
