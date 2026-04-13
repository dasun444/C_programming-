#include <stdio.h>
int main(void){
    int foreignLoginStatus;
    float transactionAmount;
    printf("Enter your transaction amount: ");
    scanf("%f",&transactionAmount);
    printf("Enter your foreign login status(1=Yes, 0=No): ");
    scanf("%d",&foreignLoginStatus);

        if(transactionAmount>100000 && foreignLoginStatus==1){
            printf("High Risk Transaction - Block Account.");
        }
        else if(transactionAmount>100000 || foreignLoginStatus==1){
            printf(" Security Verification Required.");
        }
        else if(transactionAmount>=50000 && transactionAmount<=100000){
            printf("Transaction Under Review.");
        }

        else {
            printf("Transaction Approved.");
        }

}
