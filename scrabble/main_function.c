#include<stdio.h>
#include "container.h"
/**
 * main - decide either the first player or thr second player has winned
 *
 * Return: Allways 0
 */
int main(void)
{
	int score1 = first_player();

	int score2 = second_player();

		if(score1  > score2)
			printf("Player 1 wins!");
		else if(score1 < score2)
			printf("Player 2 wins!");
		else
			printf("Tie!");
}
