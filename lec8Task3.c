/*write a function to input N numbers and display how many are positive negative and zero.
*/
#include <stdio.h>

void countNumbers(int N);

int main(){
    int N;
    printf("Enter how many numbers: ");
    scanf("%d",&N);
    countNumbers(N);
    
    return 0;
}
void countNumbers(int N){
    int num;
    int positive=0,negative=0,zero=0;
for (int i=1;i<=N;i++){
    printf("Enter Number %d: ",i);
    scanf("%d",&num);

        if (num>0){
            positive+=1;// or positive++
        }
        else if(num<0){
            negative++; // or negative+=1
        }
        else{
            zero++;//zero+=1
        }
}
printf("\nPositive numbers = %d\n",positive);
printf("Negative numbers = %d\n",negative);
printf("Zeros = %d\n",zero);
}
