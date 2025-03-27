#include <stdio.h>

int main() {
    char filename[50], ch;
    int lines = 0, spaces = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') lines++;
        if (ch == ' ') spaces++;
    }

    fclose(file);
    printf("Lines: %d, Spaces: %d\n", lines, spaces);
    return 0;
}
