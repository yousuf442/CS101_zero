#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * calculate_index - calculates numbers of words, letters, and sentence
 *
 * Return: index
 */
double calculate_index(char txt[])
{
	int i;

	double L;

	double S;

	int words = 0;

	int sentences = 0;

	int letters = 0;

	for (i = 0; txt[i] != 0; i++)
	{
		if (txt[i] == ' ')
			words++;
		else if (txt[i] == '.' || txt[i] == '!' || txt[i] == '?')
			sentences++;
		else if (isalpha(txt[i]))
			letters++;
	}
	words++;
	L = (letters / (double) words) * 100;
	S = (sentences / (double) words) * 100;
	return (0.0588 * L - 0.296 * S - 15.8);
}
/**
 * main - check the code
 *
 * Return: Allways 0
 */
int main(void)
{
	char txt[65530];

	fgets(txt, sizeof(txt), stdin);

	int ix = (int)(calculate_index(txt) + 0.5);

	if (calculate_index(txt) < 1)
		printf("Before Grad 1\n");
	else if (calculate_index(txt) >= 16)
		printf("Grad 16+\n");
	else
	printf("Grad %d\n", ix);

}
