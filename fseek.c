#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char buffer[100];

    fp = fopen("sample.txt", "r+");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fseek(fp, 10, SEEK_SET);

    fread(buffer, sizeof(char), 9, fp);
    buffer[9] = '\0';

    printf("Read from file after fseek: %s\n", buffer);

    fclose(fp);

    return 0;
}