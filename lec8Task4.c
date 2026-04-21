/*Write a function to read a number and return the sum of its digits*/

#include <stdio.h>
int sumOfDigits(int num);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumOfDigits(number);
    printf("Sum of digits = %d", result);

    return 0;
} 


int sumOfDigits(int num) {
    int sum = 0;
    
    // handle negative numbers
    if(num < 0)
        num = -num;

    while(num > 0) {
        sum = sum + (num % 10);  // get last digit
        num = num / 10;          // remove last digit
    }

    return sum;
}