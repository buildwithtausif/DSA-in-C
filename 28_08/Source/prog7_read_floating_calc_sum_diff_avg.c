//Prog7: read two floating type numbers from user. Calculate their sum, difference, product and average
#include <stdio.h>

int main() {
	float a,b;
	a=0.0;
	b=0.0;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("Please enter any two floating value: ");
	scanf("%f %f", &a,&b);
	
	//	sum of two floats
	printf("Sum= %.3f\n", (a+b));
	//	diffrenece of two floats
	printf("difference= %.3f\n", (a-b));
	//	product of two floats
	printf("product= %.3f\n", (a*b));
	//	average of two floats
	printf("average= %.3f\n", ((a+b)/2));
	return 0;
}
