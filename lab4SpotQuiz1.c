#include <stdio.h>
int main(){

char ch;
printf("Enter a character :");
scanf("%c",&ch);
if((ch >='A' && ch<='Z') || (ch >= 'a' && ch <='z')){
   printf("It is in alphabet\n");
   }


else
{
    printf("It is not alphabet\n");
}
/*printf("Method 2\n");
char letter;
printf("Enter a Character :");
scanf("%c",&letter);
int ASCII = (int) letter;
if((ASCII>=65 && ASCII<=90) || (ASCII >= 97 && ASCII<=122)){
   printf("It is in alphabet");
   }


else
{
    printf("It is not alphabet");
}*/



return 0;
}
