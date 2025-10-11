#include<stdio.h>
#include<ctype.h>
#include "container.h"
/**
 * second_player - count the value of the second player
 *
 * Return: an integer
 */
int second_player(void)
{

        char second_word [100];

         printf("write the second player's string\n");

        scanf("%s", second_word);


	 int total_second_value = 0;

	 int char_value , i;

        for(i= 0; i < sizeof(second_word) ; i++)
        {
		second_word [i] = toupper(second_word [i]);

                if (second_word [i] == 'A' || second_word [i] == 'E' || second_word [i] == 'I' ||
                    second_word [i] == 'L' || second_word [i] == 'N' || second_word [i] == 'O' ||
                    second_word [i] == 'R' || second_word [i] == 'S' || second_word [i] == 'T' ||
                                        second_word [i] == 'U')
                        char_value = 1;

                else if (second_word [i] == 'D' || second_word [i] == 'G')
                        char_value = 2;
                else if (second_word [i] == 'B' || second_word [i] == 'C' || second_word [i] == 'M' || second_word [i] == 'P')
                        char_value = 3;
                else if (second_word [i] == 'F' || second_word [i] == 'H' || second_word [i] == 'V' || second_word [i] == 'W' || second_word [i] == 'Y')
                        char_value = 4;
                else if (second_word [i] == 'K')
                        char_value = 5;
                else if (second_word [i] == 'J' || second_word [i] == 'X')
                        char_value = 8;
                else
                        char_value = 10;
                        total_second_value += char_value;

        }
        return (total_second_value);
}


