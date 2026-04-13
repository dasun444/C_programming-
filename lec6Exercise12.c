#include <stdio.h>
int main (void){
    int yearOfExperience,performanceRating;
    printf("Enter your years of experience: ");
    scanf("%d",&yearOfExperience);
    printf("Enter your performance rating(1-10): ");
    scanf("%d",&performanceRating);
    if(yearOfExperience>=5){
            if(performanceRating>=8){
                printf("The employee is promoted");
            }
            else{
                printf("The employee is not promoted");
            }
        }
        else{
            printf("The employee is not promoted");
        }
    }
