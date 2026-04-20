#include <stdio.h>
int main (void){
    int capacity=40;
    int passengersEntered=0,totalPassengers=0;
    int remainingSeats=0;

    while(totalPassengers<40)
    {
        remainingSeats=capacity-totalPassengers;

        printf("Current Passenger Count = %d\n",totalPassengers);
        printf("available seats = %d\n",remainingSeats);
        printf("Enter number of passengers entering at this bus stop: ");
        scanf("%d",&passengersEntered);
        totalPassengers += passengersEntered;   
        
        if(totalPassengers>capacity){
            printf("Only limted seats available!\n");
            totalPassengers= capacity;
        }
       
    
    }
printf("Bus is full.\n final passenger count is %d",totalPassengers);

    }    
    