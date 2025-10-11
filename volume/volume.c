#include<stdio.h>
#include<stdlib.h>
/*
 * main - changes the volume of a wave file
 *
 * Return: 0 in case of succes and -1 in case of fail
 * */
int main(int argc, char* argv[])
{
		short samble;
		FILE *wave1;
		char* h;
		FILE *wave2;

		if (argc != 4)
		{
                printf("put inputfile outputfile factor as soon as running thar programm directry\n");
			return 1;
		}
		wave1 = fopen(argv[1], "rb");

		if (wave1 == NULL)
		{
			printf("Error, can not read the file input\n");
			return 1;
		}
		h = malloc(sizeof(char) * 44);

		if (h == NULL)
		{
                        printf("Error, there is no enough space in your ram memory\n");
			fclose(wave1);
                        return 1;
		}
		wave2 = fopen(argv[2], "wb");

		if (wave2 == NULL)
		{
                        printf("Error, can not creat the file output\n");
			fclose(wave1);
			free(h);
                        return 1;
		}
		if (fread(h, sizeof(char), 44, wave1) != 44)
		{
			printf("Error, can't read the header input file\n");
			fclose(wave1);
			fclose(wave2);
                        free(h);
			return 1;
		}
		if (fwrite(h, sizeof(char), 44, wave2) != 44)
		{
			printf("Error, can't write the header in the output file\n");
                        fclose(wave1);
                        fclose(wave2);
                        free(h);
                        return 1;
		}
		free(h);
		while (fread(&samble, sizeof(short), 1, wave1))
		{
			samble = (short) (atof(argv[3]) * samble);
			if (samble > 32767)
				samble = 32767;
			else if(samble < -32768)
				samble = -32768;
			fwrite(&samble, sizeof(short), 1, wave2);
		}
		fclose(wave2);
		fclose(wave1);
}
