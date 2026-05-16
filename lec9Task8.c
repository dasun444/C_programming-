/*Write a C program to sort values of an int array in descending order*/

#include <stdio.h>
int main(){
    int i,j,n,temp;
    printf("How many numbers do you want to enter? \n");
    scanf("%d",&n); 
    int arr[n];
    printf("Enter %d numbers: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Sorting in descending order
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){ // Change to < for descending order
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //Displaying sorted array
    printf("Numbers in descending order are: \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

/*How many numbers do you want to enter? 
5
Enter 5 numbers: 
4
2
5
1
9
Numbers in descending order are: 
9
5
4
2
1