#include "main.h"
/*
 * shipher - change character as the key
 *
 * Return: 0 in case of success
 */
int shipher(int c,char *v)
{
	printf("put your txt wanted to be shiphered\n");
	char txt[999999];
	printf("plaintext: ");

	fgets(txt, sizeof(txt), stdin);
	int r;

	printf("ciphertext: ");
	for (r = 0; txt[r] != 0; r++)
	{
		if (isupper(txt[r]))
			printf("%c", toupper(v[txt[r] - 'A']));
		else if (islower(txt[r]))
			printf("%c", tolower(v[txt[r] - 'a']));
		else
			printf("%c", txt[r]);
	}
	return (0);
}
