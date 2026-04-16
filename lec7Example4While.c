#include <stdio.h>
int main (void){
    int i = 0;
    while(i++<5){
        printf("%d\n",i);/*output = 1 2 3 4 5.
                         i++, first use old(i=0) value after check (old i <5(0<5))then new i(i++(1)) ----> print i 1.......   */
                          }

    printf(" \n");
    
     int j = 0;
    while(++j<5){
        printf("%d\n",j);/*output = 1 2 3 4. 
                         ++j,first increase j (to new j (0--->1) ) check j<5(new j(1<5)) then print this new j(1)... */
    }

}