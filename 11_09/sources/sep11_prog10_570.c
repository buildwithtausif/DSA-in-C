// WAP to find area and perimeter. Read input (lenght, breadth) from user
#include <stdio.h>

int main() {
	float length, breadth;
	length = 0;
	breadth = 0;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("To calculate perimeter and area of a rectangle\n");
	printf("Enter Length and Breadth of the rectangle respectively: ");
	scanf("%f %f", &length,&breadth);
	float perimeter = 2 * (length + breadth);
	float area = length * breadth;
	
	// computer area and perimeter 
	printf("\n\nPerimeter of the rectangle: %.2f units\n", perimeter);
	printf("Area of the rectangle: %.2f sq.units\n", area);
	
	return 0;
}