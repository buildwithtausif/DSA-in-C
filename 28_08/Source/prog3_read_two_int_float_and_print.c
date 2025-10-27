//Prog5: read two integers from user and print  both the numbers . Find their sum and assign it to third variable
#include <stdio.h>
readNsum(); //user-defined fxn

void main() {
	printf("By Tausif Alam, BCA-1EA\n\n");
	readNsum();
}

int readNsum() {
	float x,y;
	x=0.0;
	y=0.0;
	printf("type two numbers: ");
	scanf("%f %f", &x, &y);
	float sum=0.0;
	sum=x+y;
	printf("sum of x and y=  %5.3f", sum);
}

