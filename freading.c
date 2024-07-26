#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char buffer[100];

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fread(buffer, sizeof(char), 19, fp);
    buffer[19] = '\0';

    printf("Read from file: %s\n", buffer);

    fclose(fp);

    return 0;
}
