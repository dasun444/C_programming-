#include <stdio.h>
int main(void){
    float speed;;
    printf("Enter detected the speed(mph): ");
    scanf("%f",&speed);
    if(speed>=31 && speed<=40){
        printf("50 Pounds");
    }
    else if(speed>=41 && speed<=50){
        printf("75 Pounds");
    } 
    else if( speed>50){
        printf("100 Pounds");
    }
    else{
        printf("No Pounds");

    }
    return 0;
}