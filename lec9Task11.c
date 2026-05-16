/*Spot quiz 2
Write a C program that reads two arrays, 
passes them to a function, and stores their elements in a third array.
print the third array in main */

#include <stdio.h>

// Function to merge two arrays into a third array
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    int i, j;

    // Copy first array elements
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy second array elements
    for(j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }
}

int main() {
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, i;

    // Input size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    // Input first array elements
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    // Input second array elements
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Call function to merge arrays
    mergeArrays(arr1, n1, arr2, n2, arr3);

    // Print merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
/*Output:
Enter number of elements in first array: 3
Enter elements of first array:
2
4
6
Enter number of elements in second array: 3
Enter elements of second array:
1
3
5
Merged array:
2 4 6 1 3 5*/