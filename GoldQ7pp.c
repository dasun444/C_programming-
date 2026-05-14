#include <stdio.h>

// Function prototype
int getAverage(int *marks, int numStudents);

int main() {
    int marks[100];
    int average;

    // Input marks
    for(int i = 0; i < 100; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Function call
    average = getAverage(marks, 100);

    // Display average
    printf("\nAverage marks: %d\n", average);

    return 0;
}

// Function definition
int getAverage(int *marks, int numStudents) {
    int sum = 0;

    for(int i = 0; i < numStudents; i++) {
        sum += marks[i];
    }

    return sum / numStudents;
}

/*
#include <stdio.h>

int main() {
    int indexNo[100];
    int marks[100];

    // Input index numbers and marks
    for(int i = 0; i < 100; i++) {

        printf("Enter index number for student %d: ", i + 1);
        scanf("%d", &indexNo[i]);

        printf("Enter ICT marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display student details
    printf("\nStudent Details:\n");

    for(int i = 0; i < 100; i++) {
        printf("Index No: %d\tMarks: %d\n", indexNo[i], marks[i]);
    }

    return 0;
}
*/