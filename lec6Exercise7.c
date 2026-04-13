#include <stdio.h>
int main (){
    int height,runningTime;
    printf("Enter the height(cm): ");
    scanf("%d",&height);
    printf("Enter running time of a student(seconds): ");
    scanf("%d",&runningTime);
    if ((height>=10)|| (runningTime<=12)){
        printf("Selected for the team");
    }
    else{
        printf("Not selected for the team");
    }

    return 0;
}