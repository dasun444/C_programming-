/*Make a calculator to do operations for two number choose 5 operations (+, -, *, /, %)  */
#include <stdio.h>

// function declarations
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float divide(float a, float b);
int mod(int a, int b);

int main() {
    float num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nCalculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result = %.2f", add(num1, num2));
            break;
        case 2:
            printf("Result = %.2f", sub(num1, num2));
            break;
        case 3:
            printf("Result = %.2f", mul(num1, num2));
            break;
        case 4:
            printf("Result = %.2f", divide(num1, num2));
            break;
        case 5:
            printf("Result = %d", mod((int)num1, (int)num2));
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}

// function definitions
float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if(b == 0) {
        printf("Cannot divide by zero!");
        return 0;
    }
    return a / b;
}

int mod(int a, int b) {
    if(b == 0) {
        printf("Cannot mod by zero!");
        return 0;
    }
    return a % b;
}