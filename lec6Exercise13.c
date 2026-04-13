#include <stdio.h>
int main(){
    int creditScore;
    float monthlySalary;
printf("Enter your monthly salary: ");
scanf("%f",&monthlySalary);
printf("Enter your credit score: ");
scanf("%d",&creditScore);
if(monthlySalary>=50000){
    if(creditScore>=700){
        printf("The loan is approved.");
    }
    else {
        printf("The loan is rejected due to a low credit score.");
    }
}
else{
    printf("The loan is rejected due to insufficient monthly salary.");
} 
    return 0;
} 