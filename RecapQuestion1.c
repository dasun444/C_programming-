/*Recap Question 1 - Switchs*/
#include <stdio.h>

int main() {
    float purchaseAmount, discount = 0, netAmount;
    int isMember;

    printf("Enter the total purchase amount (Rs.): ");
    scanf("%f", &purchaseAmount);
    printf("Are you a member? ( 1 for Yes, 0 for No): ");
    scanf("%d", &isMember);

    switch (isMember) {
        case 1:
            if (purchaseAmount > 5000) {
                discount = 0.15;
            } else {
                discount = 0.10;
            }
            break;

        case 0:
            if (purchaseAmount > 5000) {
                discount = 0.07;
            } else {
                discount = 0.00;
            }
            break;

        default:
            printf("Invalid input for membership status.\n");
    }

    float discountAmount = purchaseAmount * discount;
    netAmount = purchaseAmount - discountAmount;

    printf("\n--- Receipt ---\n");
    printf("Total Purchase: Rs. %.2f\n", purchaseAmount);
    printf("Discount Applied: %.0f%%\n", discount * 100);
    printf("Discount Amount: Rs. %.2f\n", discountAmount);
    printf("Net Amount to Pay: Rs. %.2f\n", netAmount);

    return 0;
}