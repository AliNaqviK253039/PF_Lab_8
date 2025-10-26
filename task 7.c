#include <stdio.h>

int searchElement(int arr[], int size, int key) {
    int i;
	for(i = 0; i < size; i++) {
        if(arr[i] == key)
            return i;  
    }
    return -1;  
}

int main() {
    int arr[10];
    int key, index;
    int i;
    printf("Enter 10 integers:\n");
   
    for( i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    index = searchElement(arr, 10, key);

    if(index != -1)
        printf("Element %d found at index %d\n", key, index);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}

