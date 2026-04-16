#include <stdio.h>
int main (void){
    int i=1;
    while (i<=10){
        printf("%d ", i);//\n is used to print each number on a new line, but here we want to print them on the same line with a space in between
        // when i++ is not used, the value of i will always be 1 and the loop will run indefinitely
    }

}