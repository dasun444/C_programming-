/*Write a function checkEvenOdd (int num) that print whether 
the element is even or odd.pass array element one by one*/ 
#include <stdio.h>
void checkEvenOdd(int num) {
    if(num%2==0)
        printf("%d is Even.\n",num);
    else
        printf("%d is Odd.\n",num);
}
int main(){
    int arr[5]={3,8,11,20,7};
    for (int i=0;i<5;i++){
        checkEvenOdd(arr[i]);//function call for each element of array
    }
    return 0;
}

/*Output
3 is Odd.
8 is Even.
11 is Odd.
20 is Even.
7 is Odd.
*/


    