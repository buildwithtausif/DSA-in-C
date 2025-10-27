// WAP to print circumference and area of circle. Read input (radius) from user. Take PI as symbolic constant.
#include <stdio.h>

#define PI 3.14

int main() {
	float r = 0.00; // radius of the circle
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("To calculate perimeter and area of a rectangle\n");
	printf("Enter radius of the circle: ");
	scanf("%f", &r);
	float circum = 2*PI*r;
	float area = PI*r*r;
	
	// computer area and perimeter 
	printf("\nCircumference of the circle: %.2f units\n", circum);
	printf("Area of the circle: %.2f sq.units\n", area);
	
	return 0;
}