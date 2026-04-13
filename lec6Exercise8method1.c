#include <stdio.h>
int main() {
    int space;

    printf("Is Parking space available?(1 = Yes, 0 = No): ");
    scanf("%d",&space);
    if(!space){ // special
        printf("Parking Full");
    }
    else{
        printf("Parking Available");
    }

    return 0;
}   