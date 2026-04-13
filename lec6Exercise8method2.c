#include <stdio.h>
int main() {
    int available;

    printf("Is Parking space available?(1 = Yes, 0 = No): ");
    scanf("%d",&available);
    if(available!=0){ // special
        printf("Parking Full");
    }
    else{
        printf("Parking Available");
    }

    return 0;
}   