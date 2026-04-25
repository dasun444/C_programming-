/* Leap year or not(4න් බෙදිලා 100න් බෙදෙන්නෙ නැත්තම් or 400න් බෙදෙනවනම් okay)*/

#include <stdio.h>
int isLeapYear(int year);

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}


// Function to check leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // leap year
    } else {
        return 0; // not leap year
    }
}