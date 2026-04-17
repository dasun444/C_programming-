#include <stdio.h>
int main (void){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
}
/*output
A B C D E 
A B C D 
A B C 
A B 
A
*/