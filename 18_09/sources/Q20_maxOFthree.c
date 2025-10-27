// WAP to find maximum of three numbers by using if-else statement
#include <stdio.h>

int main() {
	int a,b,c;
	a = 7;
	b = 9;
	c = 15;
	printf("By Tausif Alam, BCA-1EA\n\n");
	if ( a > b && a > c) {
		printf("%d is greater than %d and %d", a,b,c);
	} else if (b > a && b > c) {
		printf("%d is greater than %d and %d", b,a,c);
	} else {
		printf("%d is greater than %d and %d", c,b,a);
	}
	
// this one is being identified is malware
//	if (!(a > b)) {
//		if (!(b > c)) {
//			printf("%d is greater than %d and %d", a, b);
//		} else {
//			printf("%d is greater than %d and %d", b,a,c);
//		}
//	} else {
//		printf("%d is greater than %d and %d", a,b,c);
//	} 
	return 0;
}
