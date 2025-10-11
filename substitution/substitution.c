#include "main.h"
/**
 * main - check the key of chifering
 *
 * Return: 0 if it okay and 1 if there is an error
 */
int main(int argc, char *argv[2])
{
	int i;

	int j;

	if (argc == 2)
	{
		if (strlen(argv[1]) != 26)
		{
			printf("please put the key as a one string containing exactly diffrent 26 letter\n");
			return (1);
		}
		else
		{
			for (i = 0; i < 26; i++)
			{
				if (isalpha(argv[1][i]) && !isdigit(argv[1][i]))
				{
				for (j = i + 1; j < 26; j++)
				{
					if (toupper(argv[1][i]) == toupper(argv[1][j]))
					{
						printf("please, don't repeat the same letter more than one time\n");
						return (1);
					}
				}
				}
				else
                                {
                                        printf("the key should contain letters only\n");
                                        return (1);
				}

			}
			shipher(argc, argv[1]);
		}
	}
	else
	{
		printf("please put the key as a one string\n");
	return (1);
	}
	return (0);
}
