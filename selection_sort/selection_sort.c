#include<stdio.h>
/*
 * main - does selection sort
 *
 * Return: Allways 0
 **/
int main(void)
{
	int arr[9] = {9, 6, 5, 8, 7, 4, 3, 2, 1};

	int i;

	int j;

	int tabdeel;

	int min;

	for (i = 0; i < 9; i++)
		printf("%d", arr[i]);
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		min = i;
	for (j = i + 1; j < 9; j++)
	{
		if (arr[min] > arr[j])
			min = j;
	}

		tabdeel = arr[i];
		arr[i] = arr[min];
		arr[min] = tabdeel;
	}
	for (i = 0; i < 9; i++)
                printf("%d", arr[i]);
	return (0);
}
