#include <stdio.h>
int main (void){
    int num;
    int sum=0;//sum should be initialized to 0, otherwise it will contain garbage value and the result will be incorrect
    printf("Enter a Number: ");
    scanf("%d",&num);
    while (num>=0){
        sum = sum + num;
        printf("Enter a Number: ");
        scanf("%d",&num);// i or i++ is not used here because we want to keep taking input until the user enters a negative number, and we are updating num with the new input value in each iteration of the loop

    }
    printf("Sum of the entered numbers is: %d", sum);
}