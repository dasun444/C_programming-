/*Write a C program to input length and width of a rectangle and find area
and perimeter of the given rectangle. Use call by reference method and
use two separate functions.*/
#include <stdio.h>

void findArea(float length, float width, float *area);
void findPerimeter(float length, float width, float *perimeter);


int main() {
    float l, w, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter width: ");
    scanf("%f", &w);

    findArea(l, w, &area);           // call by reference
    findPerimeter(l, w, &perimeter); // call by reference

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}


// function to calculate area (call by reference)

void findArea(float length, float width, float *area) {
    *area = length * width;
}

// function to calculate perimeter (call by reference)
void findPerimeter(float length, float width, float *perimeter) {
    *perimeter = 2 * (length + width);
}
