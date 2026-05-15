/*Write a function square (int x) that ****returns the square of a number.
Display the squares of all elements. */

#include <stdio.h>
int square(int x){
    return x*x;
}
int main(){
    int arr[4]={2,4,6,8};
    for (int i=0;i<4;i++){
        printf("Square of %d = %d\n",arr[i],square(arr[i]));
        /*calling the function square and passing the value of arr[i] as an argument to it.
         The function will return the square of the number, 
         which is then printed to the console.*/
    }
return 0;
}

