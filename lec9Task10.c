/* 2.Passing the entire(සම්පූර්ණ) array to a function

Write a C program to rotate array elements 
to the left by one position by passing the whole array to a function*/

#include <stdio.h>
//function to rotate array elements to the left by one position
void rotateLeft(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
int main(){
    int arr[100], n, i;
    printf("How many numbers do you want to enter? \n");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    //calling the function to rotate the array
    rotateLeft(arr, n);
    //displaying the rotated array
    printf("Array after rotating left by one position: \n");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
/*
Output:
How many numbers do you want to enter? 
5
Enter 5 numbers: 
1
2
3
4
5
Array after rotating left by one position: 
2 3 4 5 1*/