#include <stdio.h>
int main(void) {
    float total;
    float discount=0.1;
    printf("Enter the total amount: ");
    scanf("%f",&total);
    if(total>1000){
            total = total - (total*discount);
            printf("Final Amount: %.2f\n",total);
    }
   
        printf("Final Amount : %.2f\n",total);
    
}
    
