#include <stdio.h>

int main() {
    int n, i;

    
    printf("Enter size of array (N): ");
    scanf("%d", &n);

    int arr[n];
    int freq[n];
    
    for(i = 0; i < n; i++) {
        freq[i] = 0;
    }

    printf("Enter %d elements (values between 0 and %d):\n", n, n - 1);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; 
    }

    int found = 0;

    printf("Duplicate elements are: ");
    for(i = 0; i < n; i++) {
        if(freq[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found)
        printf("None");

    printf("\n");
    return 0;
}

