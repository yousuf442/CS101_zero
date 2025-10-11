#include <stdio.h>

void hash_print(unsigned int n, char type)
{
    if (type != 's' && type != 'u' && type != 'd') // other ways to do the same condition?
    {
        printf("Please choose from s, u or d!\n"); // user input validation loop in main?
        return;
    }
    else
    {
        if (type == 's')
        {
            for (size_t i = 0; i < n; i++)
            {
                for (size_t j = 0; j < n; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        else if (type == 'u')
        {
            for (size_t i = 0; i < n; i++)
            {
                for (size_t j = 0; j < n - 1 - i; j++)
                {
                    printf(" ");
                }
                for (size_t j = 0; j < i + 1; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        else if (type == 'd')
        {
            for (size_t i = 0; i < n; i++)
            {
                for (size_t j = 0; j < n - 1 - i; j++)
                {
                    printf(" ");
                }
                for (size_t j = 0; j < i + 1; j++)
                {
                    printf("#");
                }
                printf("  ");
                for (size_t j = 0; j < i + 1; j++)
                {
                    printf("#");
                }
                for (size_t j = 0; j < n - 1 - i; j++)
                {
                    printf(" ");
                }

                printf("\n");
            }
        }
        else
        {
            printf("Please choose from s, u or d!\n"); // user input validation loop in main?
        }
    }
}
