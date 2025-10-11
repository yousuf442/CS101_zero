#include<stdio.h>
/**
 * main - check the code
 *
 * Return: allways 0
 */
	int t [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	int num, target, end_left, end_right, i;

int binary_recursion(int arr []);
int main(void)
{
	num = 15;

	end_left = 0;

	end_right = num - 1;

	target = 14;

	i = (end_right + end_left) / 2;

	binary_recursion(t);

}

/**
 * binary_recursion - do binary sears
 *
 * Return: allways the index
 */
int binary_recursion(int arr [])
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

			binary_recursion(arr);
			}
                else if (arr[i] > target)
                {
                        end_right = i;

                i = (end_right + end_left) / 2;

		binary_recursion(arr);
                }
}
