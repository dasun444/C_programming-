#include <stdio.h>
int main(void){
    int start,end,units;//units are calculated by end-start
    float bill=0,surcharge,total; /*why float bill=0? because if we do not initialize it, it will have garbage value and when we add to it, it will give us wrong answer*/

    printf("Enter the starting meter reading: ");
    scanf("%d", &start);

    printf("Enter the ending meter reading: ");
    scanf("%d", &end);

    units = end - start;

    if(units <=50){
        bill = units * 0.50;
    }
    else if (units > 50 && units <= 150 ){
        bill = (50*0.50) + (units - 50)*0.75;
    }
    else if (units > 150 && units <= 250){
        bill = (50*0.50) + (100*0.75) + (units - 150)*1.20;
    }
    else {//Does not use else if(use else{}) because if units is greater than 250, it will automatically be greater than 150 and 50, so it will not check for those conditions and will directly go to the else if condition for units > 250 
        bill = (50*0.50) + (100*0.75) + (100*1.20) + (units - 250)*1.50;
    }
    surcharge = bill * 0.20;
    total = bill + surcharge;
    
    printf("Units Consumed = %d\n", units);
    printf("Bill Amount = Rs. %.2f\n", bill);
    printf("Surcharge = Rs. %.2f\n", surcharge);
    printf("Total Bill = Rs. %.2f\n", total);
    }

