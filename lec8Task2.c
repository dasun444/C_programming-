/*Write a program to get summation of three numbers through a sepatate function.*/

#include <stdio.h>

    int sum(int x, int y , int z);// semicolon

    int main(){
        int a = sum(1,2,3);
        printf("sum = %d\n",a);
        printf("sum = %d\n",sum(3,4,5));
return 0;
}
int sum(int x, int y , int z){//curly brackets
    return x+y+z;//**********/

}
/*
#include <stdio.h>

// function declaration
int sumThree(int a, int b, int c);

int main() {
    int n1, n2, n3, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    result = sumThree(n1, n2, n3);

    printf("Sum = %d", result);
    return 0;
}

// function definition
int sumThree(int a, int b, int c) {
    return a + b + c;
}
*/
