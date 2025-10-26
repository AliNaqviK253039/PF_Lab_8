#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    
    while (sscanf(&str[i], "%[^0-9]", result + j) == 1) {
        while (str[i] && (str[i] < '0' || str[i] > '9')) {
            i++;
            j++;
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    result[j] = '\0'; 

    printf("String without numeric characters: %s\n", result);

    return 0;
}

