#include<stdio.h>
/**
 * main - do binary sears
 *
 * Return: allways 0
 */
int main(void)
{
	int i, end_right, end_left, num, z, target;

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	num = 15;

	end_left = 0;

	end_right = num - 1;

	target = 14;

	i = (end_right + end_left) / 2;

	for (z = 0; arr[z] != 0; z++)
	{
		if (arr[i] == target)
		{
		printf("its index = %d\n", i);
		return (i);
		}
		else if (arr[i] < target)
		{
			end_left = i;

			i = (end_right + end_left) / 2;

		}
		else if (arr[i] > target)
		{
			end_right = i;

		i = (end_right + end_left) / 2;

		}
	}
}
