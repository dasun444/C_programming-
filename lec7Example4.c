#include <stdio.h>
int main(void){
    char i = 'B';

switch(i)
{
    case 'A':
    case 'B':
    case 'C':
        printf("I am in case 1\n");
        break;

    case 'D':
        printf("I am in case 2\n");
        break;

    case 'E':
        printf("I am in case 3\n");
        break;

    default:
        printf("I am in default\n");
}
}