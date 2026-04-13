#include <stdio.h>
int main (){
    int currentYear,joinedYear,x;
    printf("Enter the current year and the year you joined the company : ");
    scanf("%d %d",&currentYear,&joinedYear);
    x= currentYear-joinedYear;
    if(x>3){
        printf("The employee recieves Rs.2500 as bonus");

    }
    else{
        printf("The employee is not eligible for the bonus");
    }



    return 0;
}