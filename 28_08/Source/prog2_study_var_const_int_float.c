#include <stdio.h>
/*
	we will study variables and constants of int and float data types
	***** this program has compile time error left intentionally ******
*/
int main() {
    printf("By Tausif Alam, BCA-1EA\n\n");
    // integer variable
    int age = 20;

    // float variable
    float height = 5.9;

    // integer constant
    const int BIRTH_YEAR = 2005;

    // float constant
    const float PI = 3.14159;

    // Printing variables
    printf("Variable (int) age = %d\n", age);
    printf("Variable (float) height = %.2f\n", height);

    // Printing constants
    printf("Constant (int) BIRTH_YEAR = %d\n", BIRTH_YEAR);
    printf("Constant (float) PI = %.5f\n", PI);

    // Performing operations
    int nextYearAge = age + 1;
    float circleCircumference = 2 * PI * 10;  // radius = 10

//	BIRTH_YEAR = 2006; // should give compilation error, can't assign another value to a constant
	
    printf("\nNext year age = %d\n", nextYearAge);
    printf("Circumference of circle (radius 10) = %.2f\n", circleCircumference);

    return 0;
}