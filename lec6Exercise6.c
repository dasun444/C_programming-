#include <stdio.h>
int main() {
 int marks,familyIncome;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    printf("Enter your family income: ");
    scanf("%d",&familyIncome);

if(marks>=85 && familyIncome<=100000){
    printf("Scolarship Granted");
}
else{
    printf("Scolarship Not Granted");
}
    return 0;
}