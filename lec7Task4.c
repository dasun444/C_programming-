#include <stdio.h>
int main (void){
    
    int i=1;
    int n;
    long long fact=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    while(i<=n){
        fact = fact*i;// fact*=i; both are same in this situation
        i++;
    }
    printf("Factorial of %d is %lld", n, fact);

}