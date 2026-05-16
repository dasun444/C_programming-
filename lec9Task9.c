/*1.Passing array elements individually to a function

Write a C program to pass array elements individually to 
a function and find the smallest number among the elements*/


#include <stdio.h>
//function to find the smallest number
int smallest(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int arr[100],n,i,min;

    //input number of elements
    printf("How many numbers do you want to enter? \n");
    scanf("%d",&n);
    //input elements
    printf("Enter %d numbers: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //*****Assuming the first element is the smallest
    min = arr[0];
    //pass elements individually to the function
    for(i=1;i<n;i++){
        min = smallest(min, arr[i]);
    }

    //print the smallest number
    printf("The smallest number is: %d\n", min);
    return 0;
}
/*
How many numbers do you want to enter? 
5
Enter 5 numbers: 
7
8
4
9
2
The smallest number is: 2*/