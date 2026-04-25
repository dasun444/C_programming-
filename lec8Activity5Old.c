/*Prime factores of Entered number*/

#include <stdio.h>

void primeFactors(int n) ;

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    primeFactors(num);

    return 0;
}
// Function to print prime factors
void primeFactors(int n) {
    int i;

    printf("Prime factors are: ");

    // First print all 2s
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }

    // Now check odd numbers from 3 onwards
    for (i = 3; i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
}
