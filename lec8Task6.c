/*Write a function to input a number and return its reverse*/
#include <stdio.h>

int reverseNumber(int num);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reversed number = %d", reverseNumber(number));
    return 0;
}
int reverseNumber(int num) {
    int reverse = 0;
    int digit;

    if(num < 0)
        num = -num;   // handle negative numbers

    while(num > 0) {
        digit = num % 10;        // get last digit
        reverse = reverse * 10 + digit;  // add digit to reversed number
        num = num / 10;          // remove last digit
    }
    /*Example: number = 1234

Step by step:

reverse = 0
Take last digit → 4 → reverse = 0×10 + 4 = 4
Take last digit → 3 → reverse = 4×10 + 3 = 43
Take last digit → 2 → reverse = 43×10 + 2 = 432
Take last digit → 1 → reverse = 432×10 + 1 = 4321

Final answer = 4321
    */

    return reverse;
}
