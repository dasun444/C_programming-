/*Write a simple function compare (int a,int b) that prints which one is larger.
call it by passing any two array elements. */

#include <stdio.h>
void compare(int a,int b){
    if(a>b)
        printf("%d is larger than %d \n",a,b);
    else 
    printf("%d is larger than %d \n",b,a);

}
int main(){
    int arr[5]={5,17,7,9,4};
    compare(arr[1],arr[3]);//calling the function compare and 
    // passing the values of arr[1] and arr[3] as arguments to it.

return 0;
}
/*
Output
17 is larger than 9 */

