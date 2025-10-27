// Identify valid quadratic equation
/*
	ax^2 + bx + c = 0; where a != 0
	discriminant (d) = b^2-4ac;
	d > 0; real and distinct roots
	d = 0; real and equal roots
	d < 0; imaginary roots or complex roots
	quadratic formual is -b +- root(d) / 2a;
*/
#include <stdio.h>
#include <math.h>

int main() {
	printf("By Tausif Alam, BCA-1EA\n\n");
	// read a,b,c for standard quadratic equation
	int a,b,c;
	a = b = c = 0; // just to initialize
	printf("Please enter values of a, b and c respectively: ");
	scanf("%d %d %d", &a,&b,&c);
	int d = b*b-4*a*c; // calculate discriminant
	int r1,r2; // roots
	
	if (d > 0) {
		printf("d > 0; real and distinct roots\n");
		// print roots of the quadratic
		r1 = (-b + sqrt(d)) / (2*a);
		r2 = (-b - sqrt(d)) / (2*a);
		printf("%d and %d are the roots of the eqn", r1,r2);
	} else if (d == 0) {
		printf("d = 0; real and equal roots\n");
		// print roots of the quadratic
		r1 = (-b + sqrt(d)) / (2*a);
		r2 = (-b - sqrt(d)) / (2*a);
		printf("%d and %d are the roots of the eqn", r1,r2);
	} else {
		printf("d < 0; imaginary roots or complex roots");
	}
	return 0;
}
