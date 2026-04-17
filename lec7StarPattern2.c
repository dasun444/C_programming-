#include <stdio.h>
int main(void){
    int i,j;
    for (i=1;i<=5;i++){

        for(j=1;j<=5;j++){
            printf("%d ",i);// print i--> 1 1 1 1 1, then 2 2 2 2 2, then 3 3....
                            //print j--> 1 2 3 4 5, then 1 2 3 4 5, then 1 2 ....
                            //inner loop printf(row11111(i))
                            /*column
                            1
                            1
                            1
                            1
                            1(j)*/
        }
    printf("\n");
    }


}