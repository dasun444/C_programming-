/*A movie theater wants to calculate the total ticket cost for a customer based on the movie type, seat category, and number of tickets purchased.

Write a C program using a nested switch statement to,

•Input the movie type (2D,3D)
•Input the seat category(Regular,Premium,VIP) (2D-500,1000,3000 & 3D-700,2000,5000)
•Input the number of tickets
•Calculate the total ticket cost
•Display the total amount 
•Display an error message for invalid movie type or seat category
*/

#include <stdio.h>
int main (void){
    int movieType,seatCategory,numOfTickets;
    int price=0,total=0;
    printf("Enter Movie Type(1-2D 2-3D): ");
    scanf("%d",&movieType);
    printf("Enter Seat Category(1-Regular, 2-Premium , 3-VIP): ");
    scanf("%d",&seatCategory);
    printf("Enter number of tickets: ");
    scanf("%d",&numOfTickets);

    switch(movieType){
        case 1:// 2D movies

            switch (seatCategory){
                case 1:
                    price = 500;
                break;
                case 2:
                    price = 1000;
                break;
                case 3:
                    price = 3000;
                break;
                default:
                    printf("Invalid seat category\n");
            }   
        break;
        case 2:
            switch (seatCategory){
                case 1:
                price = 700;
                break;
                case 2:
                price = 2000;
                break;
                case 3:
                price = 5000;
                break;
                default:
                printf("Invalid seat Category \n");
            }
        break;
        default:
        printf("Invalid movie Category \n");
    }
    
    total=numOfTickets*price;
    printf("Total amount: Rs.%d\n",total);

    }    