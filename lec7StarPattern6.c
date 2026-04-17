#include <stdio.h>
int main (void){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){//j<=i
            printf("%d ",j);
        }
        printf("\n");
    }
/*output
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
*/
}
/* #include <stdio.h>
int main (void){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++)//j<=i
            printf("%c ",j+64);//********
        }
        printf("\n");
    }
output
A 
A B
A B C
A B C D
A B C D E

}*/