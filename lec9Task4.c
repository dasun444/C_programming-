/*Write a function sumTwo(int a,int b)that
 ****returns the sum of two array elements pass arr[1] and arr[3] to this function.*/

#include <stdio.h>
int sumTwo(int a,int b){
    return a+b;
}
int main (){
    int arr[5]={4,10,15,6,8};
    int result=sumTwo(arr[1],arr[3]);
    printf("sum = %d",result);

    return 0;
}
//Output 
// sum = 16
