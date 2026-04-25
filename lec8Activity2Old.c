/*Calculate the average of five numbers using function*/

#include <stdio.h>
float findAverage(float a,float b, float c, float d,float e );
int main(){
    float n1,n2,n3,n4,n5;
    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
    printf("Average = %.2f",findAverage(n1,n2,n3,n4,n5));
    return 0;
}
float findAverage(float a,float b, float c, float d,float e ){
    float avg = (a+b+c+d+e)/5;
    return avg;// avg, float value එකක් විදිහට return කරනවා.

}
