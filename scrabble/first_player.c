#include<stdio.h>
#include "container.h"
/**
 * first_player - count the value of the first player
 *
 * Return: an integer
 */
int first_player(void)
{

         printf("write the first player's string\n");
        char first_word [100];

        scanf("%s", first_word);

	int i , char_value;

	int total_first_value = 0;

	for(i= 0; i < sizeof(first_word); i++)
	{
		first_word [i] = toupper(first_word [i]);

		if (first_word [i] == 'A' || first_word [i] == 'E' || first_word [i] == 'I' ||
		    first_word [i] == 'L' || first_word [i] == 'N' || first_word [i] == 'O' ||
		    first_word [i] == 'R' || first_word [i] == 'S' || first_word [i] == 'T' || 
					first_word [i] == 'U')
			char_value = 1;

		else if (first_word [i] == 'D' || first_word [i] == 'G')
			char_value = 2;
		else if (first_word [i] == 'B' || first_word [i] == 'C' || first_word [i] == 'M' || first_word [i] == 'P')
                        char_value = 3;
		else if (first_word [i] == 'F' || first_word [i] == 'H' || first_word [i] == 'V' || first_word [i] == 'W' || first_word [i] == 'Y')
                        char_value = 4;
		else if (first_word [i] == 'K')
                        char_value = 5;
		else if (first_word [i] == 'J' || first_word [i] == 'X')
                        char_value = 8;
		else
                        char_value = 10;
			total_first_value += char_value;

	}
	return (total_first_value);
}
