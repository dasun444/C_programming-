#include <stdio.h>
int main() {
float side1,side2,side3;

printf("Enter the side 1: ");
scanf("%f",&side1);
printf("Enter the side 2: ");
scanf("%f",&side2);
printf("Enter the side 3: ");
scanf("%f",&side3);

if((side1 !=side2) && (side2 != side3) && (side1 != side3)){
    printf("It is a scalene triangle");
}
else if((side1 == side2) && (side2 == side3)){
    printf("It is an equilateral triangle");
}
else{
    printf("It is an isosceles triangle");
}


    return 0;
}