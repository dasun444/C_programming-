/*Q(i)Write a C program to enter 4 module marks of a student from the keyboard and display the total of all four module marks.
(ii)Modify the program written in (i) above to enter 4 module marks of 3 students and display their total marks.
(iii)Display the student with highest total mark.*/


#include <stdio.h>
int main (void){
    int marks,totalMarks=0;
    int moduleCount=0,studentCount=1,maxTotalM=0,highestMarkStudent=0;//mc,sc,max,hms

while(studentCount<=3){
        while(moduleCount<4){
            printf("Enter mark for module %d: ",moduleCount+1); // print module number starting from 1(therefore,mc+1)But,real mc value still 0)
            scanf("%d", &marks);
            totalMarks = totalMarks + marks;// or totalMarks+=marks;
            moduleCount++; // or mc++
           }
        printf("\nTotal marks for student %d = %d\n\n",studentCount,totalMarks);

        if(totalMarks > maxTotalM){ // first round, maxTotalM is 0, so totalMarks must will be greater than maxTotalM
      
        //first round, if condition definitely true, after first round, maxTotalM will be updated to totalMarks, so in the second and third round, if condition may be true or false, depending on the value of totalMarks 
      
        maxTotalM = totalMarks;// update maxTotalM to totalMarks
        highestMarkStudent = studentCount;//first round, highestMarkStudent is 1, so update highestMarkStudent to studentCount
        }
    studentCount++;// or sc+=1
    moduleCount=0;// reset moduleCount to 0 for the next student
    totalMarks=0;// reset totalMarks to 0 for the next student
}
printf("The highest total marks is %d, achieved by student %d\n",maxTotalM,highestMarkStudent);

}
