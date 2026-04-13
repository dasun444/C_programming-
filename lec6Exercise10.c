#include <stdio.h>
int main(void){
    int membershipStatus;
    float orderAmount;
    printf("Enter your order amount: ");
    scanf("%f",&orderAmount);
    printf("Enter your membership status(1=Premium, 0=Normal): ");
    scanf("%d",&membershipStatus);

    if(orderAmount>=10000 && membershipStatus==1){
        printf("20%% discount applied.");
    }
    else if (orderAmount>=10000 || membershipStatus==1){
        printf("10% discount applied.\n");  // 10% widihta demmoth error output.therefor we have to use %% to print % in the output. 
        printf("10%% discount applied.");
    }  
    else if (orderAmount>=5000){
        printf("5%% discount applied.");
    }
    else{
        printf("No discount available.");
    }
    
    }
    