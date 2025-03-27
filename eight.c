#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isKeyword(char *word) {
    char *keywords[] = {"int", "float", "return", "if", "else"};
    for (int i = 0; i < 5; i++)
        if (strcmp(word, keywords[i]) == 0) return 1;
    return 0;
}

int main() {
    char str[100], word[20];
    printf("Enter a statement: ");
    gets(str);

    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (isalnum(str[i])) word[j++] = str[i];
        else {
            word[j] = '\0';
            if (j > 0) {
                if (isKeyword(word)) printf("Keyword: %s\n", word);
                else if (isdigit(word[0])) printf("Constant: %s\n", word);
                else printf("Identifier: %s\n", word);
            }
            j = 0;
        }
        i++;
    }
    return 0;
}
