/*Write a function to input a number and return 1 if it is a palindrome, else 0.*/
#include <stdio.h>

int isPalindrome(int num);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = isPalindrome(number);

    printf("Result = %d", result);
    return 0;
}
int isPalindrome(int num)   // call by value
{
    int original = num;
    int reverse = 0, digit;

    if(num < 0)
        num = -num;

    while(num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
        return 1;   // palindrome
    else
        return 0;   // not palindrome
}

/*
method 2-use return type bool
#include <stdio.h>
#include <stdbool.h>   // for bool type

bool isPalindrome(int num);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(isPalindrome(number))
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}

bool isPalindrome(int num)   // returns true or false
{
    int original = num;
    int reverse = 0, digit;

    if(num < 0)
        num = -num;

    while(num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return (original == reverse);
}


*/