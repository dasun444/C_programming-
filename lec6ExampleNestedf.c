#include <stdio.h>
int main(void){
    int IDcard,pin;
    printf("Do you have an ID Card?(1=Yes,0=No): ");
    scanf("%d",&IDcard);
    if(IDcard==1){
        printf("Enter your PIN: ");
        scanf("%d",&pin);
        if(pin==0000){
            printf("Access Granted.");
        }
        
        }
    }







