#include <stdio.h>
int main (void){
    int category, item;
    printf("Select Category:\n1 - Drinks\n2 - Fast Food\n");
    scanf("%d", &category);

    switch(category){
        case 1:
            printf("Drinks Menu:\n1 - Tea\n2 - Coffee\n");
            scanf("%d", &item);
            switch(item){
                case 1:
                    printf("You selected Tea");
                break; 
                case 2:
                    printf("You selected Coffee");
                break;
                default:
                    printf("Invalid Drink Option");
            }
        break;
        case 2:
            printf("Fast Food Menu:\n1 - Burger\n2 - Pizza\n");
            scanf("%d", &item);
            switch(item){
                case 1:
                    printf("You selected Burger");
                break;
                case 2:
                    printf("You selected Pizza");
                break;
                default:
                    printf("Invalid Fast Food Option");
                }
        break;
        default:
            printf("Invalid Category");
}
}