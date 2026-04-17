#include <stdio.h>
int main (void){
    int correctNum = 18;
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&n);
        if (n==correctNum){
            printf("Congratulations!You find correct number %d",correctNum);
        }
        else if(n>correctNum){
            printf("Your guess is too high. Try again.\n");
        }
        else{
            printf("Your guess is too low. Try again.\n");
        }
    } while(n!=correctNum);
        }
        



