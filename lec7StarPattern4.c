#include <stdio.h>
int main (void){
    int i,j;
    for (i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("%c ",j+64);
        }
    printf("\n");
/*A B C D E 
  A B C D E
  A B C D E
  A B C D E
  A B C D E*/

}
}

/* int i,j;
    for (i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("%c ",65);
        }
    printf("\n");
}
    output
A A A A A
A A A A A
A A A A A
A A A A A
A A A A A

*/