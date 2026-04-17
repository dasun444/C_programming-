#include <stdio.h>
int main (void){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=5;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
/*outputs
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/