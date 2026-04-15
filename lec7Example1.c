#include <stdio.h>
int main(){
    int i = 2;
    switch(i){
        case 1:
            printf(" I am in case 1\n");
        case 2:
            printf(" I am in case 2\n");
        case 3:
            printf(" I am in case 3\n");
        default:
            printf(" I am in default\n");
    }
    return 0;
}