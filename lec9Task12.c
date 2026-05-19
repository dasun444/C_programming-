/* Write a program to:
• Read 5 integers into an array
• Use a pointer to calculate and print the sum of elements*/

#include <stdio.h>
int main() {
int arr[5];
int i, sum = 0;
int *ptr;
printf("Enter 5 integers:\n");
for(i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
ptr = arr;
for(i = 0; i < 5; i++) {
sum = sum + *(ptr + i);
}
printf("Sum of array elements = %d\n", sum);
return 0;
}