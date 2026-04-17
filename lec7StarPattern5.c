#include <stdio.h>
int main (void){
    int i,j;
    for (i=1;i<=5;i++){
        for(j=5;j>=1;j--){// short trick(if j-- , then j>=1, if j++ then j<=5)
            printf("%d ",j);
        }
    printf("\n");    
}
}

/*output
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
*/

/*#include <stdio.h>
int main (void){
    int i,j;
    for (i=5;i>=1;i--){
        for(j=5;j>=1;j--){
            printf("%d ",i);
        }
    printf("\n");    
}
}
 output
5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

*/