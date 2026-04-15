#include <stdio.h>
int main (){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    switch(ch){
        case 'a':case 'i':case 'u':case 'e':case 'o':
        case 'A':case 'I':case 'U':case 'E':case 'O':
                printf("It is a vowel\n");
                break;
        default:
                printf("It is not a vowel\n");
    }
    return 0;
}