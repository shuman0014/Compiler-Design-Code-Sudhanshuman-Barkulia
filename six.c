#include <stdio.h>
#include <ctype.h>

int isIdentifier(char *str) {
    if (!isalpha(str[0]) && str[0] != '_')
        return 0;
    for (int i = 1; str[i] != '\0'; i++)
        if (!isalnum(str[i]) && str[i] != '_')
            return 0;
    return 1;
}

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (isIdentifier(str))
        printf("Valid identifier.\n");
    else
        printf("Invalid identifier.\n");

    return 0;
}
