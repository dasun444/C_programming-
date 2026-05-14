/*Write a c program to receive base and height of triangle in double type values and 
calculate its area with the aid od function . use the function name as triangleArea ,use call by reference*/
#include <stdio.h>

void triangleArea(float *length ,float *height, float *area);// හැමතැනටම * mark එකක් තියෙනවා. 
// ඒක pointer කියලා හඳුන්වන්න. ඒකෙන් අපිට variable එකේ address එක ගන්න පුළුවන්.
//  ඒ address එකෙන් variable එකේ value එකට access කරන්න පුළුවන්.
void triangleArea(float *length ,float *height, float *area){
   *area=0.5*(*length)*(*height);
 /*normally use void(int *, int*) type*/
}
int main() {
    float l,h,area;
    printf("Enter length and height: ");
    scanf("%f %f",&l,&h);
    triangleArea(&l,&h,&area);
    printf("Area = %.2f",area);
    return 0;

}