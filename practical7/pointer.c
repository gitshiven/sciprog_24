#include <stdio.h>
#include <stdlib.h>

// Function to allocate an array of given size
int* allocate_memory(int length) {
    int *arr = (int *)malloc(length * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    return arr;
}

// Function to fill the array with ones
void fill_array_with_ones(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = 1;
    }
}

// Function to print the array
void display_array(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to free the allocated memory
void release_memory(int *arr) {
    free(arr);
}

int main() {
    int length;

    printf("Enter the length of the array: ");
    scanf("%d", &length);
  
    int *arr = allocate_memory(length);
    fill_array_with_ones(arr, length);

    printf("Array filled with ones: ");
    display_array(arr, length);

    release_memory(arr);

    return 0;
}
