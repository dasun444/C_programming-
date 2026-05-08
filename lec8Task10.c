/*A supermarket wants to develop a simple billing system to analyze daily customer purchases. Each customer buys multiple items. For each customer, the cashier enters the price of each item. The system should calculate the total bill for each customer and apply a discount based on the total amount. The system must calculate the total bill amount for each customer

•Apply a discount:
•If total ≥ 10,000 → 10% discount
•If total ≥ 5,000 and < 10,000 → 5% discount
•Otherwise → no discount
•Display the final payable amount
1. Create a function calculateBill() that:

•Takes item prices using a loop
•Returns the total bill amount
2. Create a function applyDiscount() that:

•Takes total bill as an argument
Returns the final amount after discount*/

#include <stdio.h>
float calculateBill();
float applyDiscount(float);

int main (){
    
    float finalAmount,total;
    printf("___Billing System___");
    printf("\n If you are finished,when enter 0 ");
    total = calculateBill();
    finalAmount=applyDiscount(total);
    printf("Total= %.2f\n",total);
    printf("Final Amount = %.2f",finalAmount);
    return 0;
}
float calculateBill(){
    float price ,sum=0.0;
    do{
        printf("\n Enter price item : ");
        scanf("%f",&price);
        sum+=price;
        
    }while (price!=0);
    return sum;/////********** */
    
}
float applyDiscount(float f){
    if (f>=10000){
        f=(f-(f*0.1));
        return f;///////
    }
    else if (f>=5000 && f<10000){
        f=(f-(f*0.05));
        return f;////////
    }
}