#include <stdio.h>
int main(){
    int i = 2;
    switch(i){
        case 1:
            printf(" I am in case 1\n");
            break;
        case 2:
            printf(" I am in case 2\n");
            break;
        case 3:
            printf(" I am in case 3\n");
            break;
        default:
            printf(" I am in default\n"); //No need of a break statement in default case as it is the last case in the switch statement.
    }
    return 0;
}