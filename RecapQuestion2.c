/*loops-Write a C program to check whether a given number is an armstrong number
An Armstrong Numberis a number that is equal to the sum of its digits each raised to the power of the number of digits

ex:- 153 is an armstrong number.it has 3 digits
1*1*1 + 5*5*5 + 3*3*3 =1+27+125=153*/
#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
   
    while (originalNum != 0) {
        originalNum/=10;//  originalNum = originalNum/10
        n++;
    }
   
    originalNum = num;
   
    while (originalNum != 0) {
    remainder = originalNum % 10;
    int power =1;
    for(int i =1;i<=n;i++){
        power*=remainder;

    }    
    result+=power;
    originalNum/=10;


    }


    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}