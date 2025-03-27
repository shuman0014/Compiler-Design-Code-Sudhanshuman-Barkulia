#include <stdio.h>
#include <string.h>

char *keywords[] = {"int", "float", "return", "if", "else", "while", "for", "do", "switch", "case"};

int isKeyword(char *word) {
    for (int i = 0; i < 10; i++)
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    return 0;
}

int main() {
    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);

    if (isKeyword(word))
        printf("Keyword found!\n");
    else
        printf("Not a keyword.\n");

    return 0;
}
