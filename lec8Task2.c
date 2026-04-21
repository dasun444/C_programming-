/*Write a program to get summation of three numbers through a sepatate function.*/

#include <stdio.h>

    int sum(int x, int y , int z);// semicolon

    int main(){
        int a = sum(1,2,3);
        printf("sum = %d\n",a);
        printf("sum = %d\n",sum(3,4,5));
return 0;
}
int sum(int x, int y , int z){//curly brackets
    return x+y+z;//**********/

}