#include <stdio.h>
int main (void){
    int i;
    int n;
for(i=1;i<=10;i++){
    if(i%2==1){
        printf("%d\n",i);
        
    }
}
}

/*
method 2: using i+=2 to print odd numbers directly
 for(i=1;i<=10;i+=2){
        printf("%d ",i);
    }

method 3: 
 for(i=1;i<10;i++){
        if(i%2!=0){
            printf("%d ",i);
        }


*/