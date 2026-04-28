#include <stdio.h>

int main() {
    // Declaring an array to hold 25 integer marks
    int marks[25];
    int i;

    printf("Enter the marks for 25 students:\n");

    // Loop to collect input
    for(i = 0; i < 25; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Displaying the marks to verify
    printf("\nStored Marks:\n");
    for(i = 0; i < 25; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}