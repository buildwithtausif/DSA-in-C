// to swap two numberws using third variable 
#include <stdio.h>

int main() {
	int a,b,c;
	a = 10;
	b = 15;
	c = a;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("original value of a=%d b=%d", a, b);
	a = b;
	b = c;
	printf("\nswapped values of a=%d and b=%d", a,b);
	return 0;
}
