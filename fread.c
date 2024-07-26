#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    const char *text = "This is a test file";

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fwrite(text, sizeof(char), strlen(text), fp);

    fclose(fp);

    return 0;
}