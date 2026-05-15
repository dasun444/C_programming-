/*Write a C program to store 10 numbers in an array and pass the array to
 a function that calculates and returns the sum of all elements
*/
#include <stdio.h>
int findSum(int arr[],int size){
    int i,sum=0;
    for (i=0;i<size ;i++){
        sum+=arr[i];//******accessing and adding each element of the array to the sum
    }
    return sum;

}
int main (){
    int numbers[10];
    int i,total;
    printf("Enter 10 numbers: \n");
    for(i=0;i<10;i++){
        scanf("%d",&numbers[i]);
    }
    total = findSum(numbers,10);//******function call
    //array name "numbers" is passed as an argument to the function findSum, along with the size of the array (10).

    printf("Sum of array elements: %d ",total);
    return 0;

}
/*
Output   
Enter 10 numbers: 
10
2 
4
6
8
10
2
4
6
8
Sum of array elements: 60 */