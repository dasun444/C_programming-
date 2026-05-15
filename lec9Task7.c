/*Write a C program to input product IDs to be stored in an array.
Display the duplicate IDs stored in the array.*/

#include <stdio.h>
int main(){
    int i,j,found,n;
    printf("How many product IDs do you want to enter? \n");
    scanf("%d",&n);
    int IDs[n];
    printf("Enter %d product IDs: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&IDs[i]);
    }
    //Displaying duplicate IDs
    printf("Duplicate product IDs are: \n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(IDs[i]==IDs[j]){
                printf("%d\n",IDs[i]);
                break;//******break statement is used to exit the inner loop once a duplicate is found,
                //  preventing multiple prints of the same duplicate ID.
            }
        }
    }
    return 0;
}
/*
Output:
How many product IDs do you want to enter?
5
Enter 5 product IDs:
101
102
103
102
104
Duplicate product IDs are:
102
*/



