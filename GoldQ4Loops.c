#include <stdio.h>
int main(void){
int student,marks = 0;
int failCount=0,passCount=0;
for(student=1;student<=10;student++)
{
    printf("Enter mark of student %d: ",student);
    scanf("%d",&marks);
    if(marks>50){
        passCount+=1;
    }
    else{
        failCount+=1;
    }
}
printf("%d Students have scored above 50\n",passCount);
printf("%d Students failed",failCount);



}
