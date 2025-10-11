#include<stdio.h>
/*
 *main - check number
 *
 * Retun: 1 if there is nimber. and 0 if not number
 * */
int main(void)
{
	int x;

	scanf("%i", &x);
	if(x >= 0 && x <= 9)
	printf("1");
	else
	printf("0");	


}
