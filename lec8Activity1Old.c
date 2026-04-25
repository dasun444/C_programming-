#include <stdio.h>
float findArea(float radius);
int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("Area of circle = %.2f",findArea(r));
    return 0;
}
float findArea(float radius){
    float area;
    area = 3.14159*radius*radius;
    return area;

}
