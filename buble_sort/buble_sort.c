#include<stdio.h>
/*
 * main - do buble sort
 *
 * Return: allways 0
 **/
int main(void)
{
	int i;

	int j;

	int tabdeel;

	int arr[10] = {1, 2, 5, 7, 6, 4, 8, 3, 9, 0};

	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");

	for (i = 0; i < 9; i++)
	{
	for (j = 0; j < 10 - i; j++)
		if (arr[j] > arr[j + 1])
		{
			tabdeel = arr[j + 1];
			arr[j + 1] = arr[j];
			arr[j] = tabdeel;
		}
	}
	for (i = 0; i < 10; i++)
        {
                printf("%d", arr[i]);
        }
	return (0);
}
