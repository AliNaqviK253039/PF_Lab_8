#include <stdio.h>

int main() {
    char str[200];
    int count = 0;
    char whitespaces[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while (sscanf(&str[i], "%[ \t\n]", whitespaces) == 1) {
        for (int j = 0; whitespaces[j] != '\0'; j++) {
            count++;
            i++;
        }

        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }

    printf("Number of whitespace characters: %d\n", count);

    return 0;
}

