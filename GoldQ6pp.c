/*October 2024 semester 1-level 1*/
#include <stdio.h>

int main() {
    int n, quantity;
    float price, total = 0, itemTotal;
    float bulkDiscount = 0, loyaltyDiscount = 0, finalTotal;
    char loyalty;

    // Input number of items
    printf("Enter the number of items: ");
    scanf("%d", &n);

    // Input price and quantity for each item
    for(int i = 1; i <= n; i++) {

        printf("Enter the price of item %d: ", i);
        scanf("%f", &price);

        printf("Enter the quantity of item %d: ", i);
        scanf("%d", &quantity);

        itemTotal = price * quantity;
        total += itemTotal;

        // Apply bulk discount if quantity > 10
        if(quantity > 10) {
            bulkDiscount += itemTotal * 0.10;
        }
    }

    // Loyalty card input
    printf("Does the customer have a loyalty card? (y/n): ");
    scanf(" %c", &loyalty);

    // Loyalty discount
    if(loyalty == 'y' || loyalty == 'Y') {
        loyaltyDiscount = total * 0.05;
    }

    // Final total
    finalTotal = total - bulkDiscount - loyaltyDiscount;

    // Output
    printf("\nTotal cost before discounts: %.0f\n", total);
    printf("Bulk discount: %.0f\n", bulkDiscount);
    printf("Loyalty discount: %.0f\n", loyaltyDiscount);
    printf("Total cost after discounts: %.0f\n", finalTotal);

    return 0;
}