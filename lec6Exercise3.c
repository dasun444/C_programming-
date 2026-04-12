#include <stdio.h>
int main() {
    int length;
    printf("Enter password length: ");
    scanf("%d",&length);
    if(length<=8){
        printf("Password is too  short\n");
    }
return 0;          
 }