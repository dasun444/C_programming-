#include <stdio.h>
int main (void){
    int i,j;
    for(i=1;i<=5;i++){

        for(j=1;j<=5;j++){
            printf("* ");//print * five times in each row, then move to the next line and print * five times again until we have printed 5 rows of *

        }
        printf("\n");
    }
}