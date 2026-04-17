#include <stdio.h>
int main (void){
    int i,j;
for(i = 1; i <= 5; i++)
{
    for(j = 1; j <= 5 - i; j++)
        printf("  ");   // spaces

    for(j = 1; j <= i; j++)
        printf("* ");

    printf("\n");
}
}/*output
        * 
      * *
    * * *
  * * * *
* * * * *

method 2
#include <stdio.h>
int main (void){
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);//rows=5
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if(i+j<=rows){
            printf("_  ");//space
            }
            else{
                printf("*  ");//star
            }
        }
        printf("\n");
    }
}
*/