/*Write a c program to input 5 integers into an array pass the array to a function .
Display all elements using the function.
*/

#include <stdio.h>
void displayArray(int arr[],int size){
    int i;
    printf("Array elements are: \n");
    for (i=0;i<size;i++){//******function definition
        printf("%d ",arr[i]);//******accessing and printing each element of the array using arr[i]
    }
}
int main(){
    int i,numbers[5];
    printf("Enter 5 integers: \n");
    for(i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    displayArray(numbers,5);//******function call
    //array name "numbers" is passed as an argument to the function displayArray

    return 0;
}
/*
Output
Enter 5 integers: 
1
2
3
4
5
Array elements are: 
1 2 3 4 5 */