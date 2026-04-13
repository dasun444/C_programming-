#include <stdio.h>
int main(){
    float marks;
    float percentage;
    printf("Enter your marks for five subjects: ");
    scanf("%f",&marks);

    percentage = (marks/500)*100;
    if (percentage>=60){
        printf("First Division");
    }
    else if ((percentage >=50) && (percentage<=59)){
        printf("Second Division");
    }
    else if(percentage >=40 && percentage <=49){
        printf("Third Division");
    }
    else {
        printf("Fail");
    }
    
    return 0;
}