#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *input_img;
    FILE *output_img = NULL;
    unsigned char temp[512];
    int i = 0;
    char filename[16];  // increased buffer size
    int types_read;

    if (argc != 2) {
        printf("Usage: %s followed by filename\n", argv[0]);
        return 1;
    }

    input_img = fopen(argv[1], "rb");
    if (input_img == NULL) {
        printf("Error, can't open %s\n", argv[1]);
        return 1;
    }

    while ((types_read = fread(temp, sizeof(char), 512, input_img))) {
        if (temp[0] == 0xff && temp[1] == 0xd8 && temp[2] == 0xff &&
            (temp[3] & 0xf0) == 0xe0) {

            if (output_img != NULL)
                fclose(output_img);

            sprintf(filename, "%03d.jpg", i);
            output_img = fopen(filename, "wb");
            i++;
        }

        if (output_img != NULL)
            fwrite(temp, sizeof(char), types_read, output_img);
    }

    fclose(input_img);
    if (output_img != NULL)
        fclose(output_img);

    return 0;
}

