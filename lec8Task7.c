/*Write a function to input a number and return the count of digits. Use call
by reference method.*/
#include <stdio.h>

void countDigits(int num, int *count);

int main() {
    int number, digits;

    printf("Enter a number: ");
    scanf("%d", &number);

    countDigits(number, &digits);   // call by reference

    printf("Number of digits = %d", digits);
    return 0;
}
void countDigits(int num, int *count) {
    *count = 0;           // initialize count

    if(num < 0){
        num = -num;       // handle negative numbers
    }
    if(num == 0) {        // special case for 0
        *count = 1;
        return;
    }

    while(num > 0) {
        num = num / 10;   // remove last digit
        (*count)++;       // increase count
    }
}
