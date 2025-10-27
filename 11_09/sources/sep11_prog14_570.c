// to swap two numbers without using third variable
#include <stdio.h>
int main() {
	int a,b;
	a = 10;
	b = 15;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("original values a=%d,b=%d", a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nswapped value a=%d,b=%d", a,b);
	return 0;
}
