#include<stdio.h>
#include<string.h>
/**
 * main - make a bit wise calculator
 *
 * Rerurn: Allways 0
 */
int main(void)
{
	int x, y;

	char op[5];

	printf("write your problem\n");

	scanf("%i %s %i", &x, op, &y);
	if (strcmp(op, "&") == 0)
		printf("%d\n", x & y);
	else if (strcmp(op, "|") == 0)
		printf("%d\n", x | y);
	else if (strcmp(op, "^") == 0)
		printf("%d\n", x ^ y);
	else if (strcmp(op, ">>") == 0)
		printf("%d\n", x >> y);
	else if (strcmp(op, "<<") == 0)
		printf("%d\n", x << y);
	else if (strcmp(op, "~") == 0)
	{
		printf("%d\n", ~x);
	}
}
