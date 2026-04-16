#include <stdio.h>
int main (void){
    int i=1;
    while (i<=20){
        if (i%2==0){
            printf("%d\n",i);
        }
        i++;
        
    }
    /* Method 2: using i+=2 to print even numbers directly
     while(i <= 20)
    {
        printf("%d ", i);
        i += 2;
    }*/


}