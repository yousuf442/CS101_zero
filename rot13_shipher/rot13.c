#include<stdio.h>
/**
 *main - chiph any string
 *
 * Return: allways 0
 */
int main(void)
{
	char arr[102];

	fgets(arr, sizeof(arr), stdin);
	int x, i;

	for (i = 0; arr[i] != '\0'; i++)
	{
		x = arr[i];

		if (x == 32)
			printf(" ");
		else if ((x >= 65 && x <= 77) || (x >= 97 && x <= 109))
			printf("%c", x + 13);
		else if ((x > 77 && x <= 90) || (x > 109 && x <= 122))
			printf("%c", x - 13);

}
}
