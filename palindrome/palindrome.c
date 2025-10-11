#include<stdio.h>

/**
 * main - checks if the string is palindrome or not
 *
 * Return: Allways 0
 */
int is_palindrome(char arr[]);

int main(void)
{
	char s[1024];

	fgets(s, sizeof(s), stdin);
	is_palindrome(s);
	return (0);
}

/**
 * is_palindrome - checks if the string is palindrome or not
 *
 * Return: either 1 if the string is palindrome or 0 if not
 */
int is_palindrome(char arr[])
{

	int imax;

	int i;

	int z = 0;

	for (i = 0; i >= 0; i++)
	{
		if (arr[i] == 0)
		{
			imax = i - 1;
			break;
		}
	}
	for (i = 0; i <= (imax / 2) ; i++)
	{
		if (arr[i] == arr[imax - i - 1])
			z += 1;
	}
	if (z == (imax / 2) + 1)
	{
		printf("your string is palindrome\n");
		return (1);
	}
	else
	{
		printf("your string is not palindrome\n");
		return (0);
	}
}
