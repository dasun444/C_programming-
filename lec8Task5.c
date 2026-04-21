/*Write a function to print all factors of a given number.
*/
#include <stdio.h>

void printFactors(int num);

int main(){
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    printFactors(number);//number danna one warahana athulata
    
    return 0;
}
void printFactors(int num){
    if(num<0){
        num = -num;
    }
    printf("Factors of %d are: ",num);//\n new lines denne na
for(int i=1;i<=num;i++){
    if (num % i ==0){
        printf("%d ",i);
        
    }

}
}