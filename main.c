#include <stdio.h>
#define SIZE 100

int main(void) {
    // Write a program in C to find the sum of all elements of the array.
    int n;
    int arr[SIZE];
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array: ", n);

    for (int i = 0; i < n; ++i) {
        printf("\nElement - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum = sum + arr[i];
    }

    printf("Sum of all elements stored in the array is: %d", sum);

    return 0;
}
