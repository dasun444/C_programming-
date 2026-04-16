#include <stdio.h>
int main (void){
    int i=1;
    while (i<=10){
        printf("%d ", i);
        // when i++ is not used, the value of i will always be 1 and the loop will run indefinitely
    }

}