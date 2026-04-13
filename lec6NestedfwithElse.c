#include <stdio.h>
int main(void){
    int marks,income;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    printf("Enter your family income: ");
    scanf("%d",&income);

    if (marks>=85){
        if(income<=100000){
            printf("Scholarship Granted.");
        }
        else{
            printf("Income too high.");
        }
    }
        else{
            printf("Marks too low.");
        } 
    
    }





