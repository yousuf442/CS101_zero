#include<stdio.h>
#include<string.h>
/*
 * main - choose a morasha7
 *
 * Return: 0
 **/
int main(int argc, char* argv[])
{
	unsigned int nv;

	int m;

	int i;

	int u;

	int k;

	int j;

	int nums[argc - 1];

	printf("Number of voters: ");
        scanf("%u", &nv);

	char mrsh[nv][40];

	getchar();
	for (i = 0; i < nv; i++)
	{
		printf("vote: ");
		fgets(mrsh[i], sizeof(mrsh[i]), stdin);

		mrsh[i][strcspn(mrsh[i], "\n")] = 0;

				u = 0;	

			for (k = 1; k < argc; k++)
			{
				if (strcmp(mrsh[i], argv[k]) == 0) {
					u = 1;
					break;
				}
			}

				if (u == 0)
                                {
                                        printf("this is not mrsh7\n");
                                  	return (1);
                                }
	}
	for (i = 0; i < argc - 1; i++)
	{
		nums[i] = 0;

		for (j = 0; j < nv; j++)
		{
			if (strcmp(mrsh[j], argv[i + 1]) == 0)
			nums[i]++;
		}
	}
		for (i = 0; i < argc - 1; i++)
		{
			m = 0;

			for (j = 0; j < argc - 1; j++)
			{
				if (nums[i] >= nums[j])
				
					continue;
				else
				{
					m = 1;

					break;
				}
			}
				if (m == 0)
				printf("%s\n", argv[i + 1]);
		}
	return (0);
}
