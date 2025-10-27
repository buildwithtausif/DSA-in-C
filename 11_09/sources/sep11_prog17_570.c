// to find maximum of three numbers by using conditional opeartor
#include <stdio.h>
int main() 
{
	int a,b,c;
	a = 6;
	b = 9;
	c = 2;
	int greatest_value = 0;
	greatest_value = (a>b) ? ((a>c) ? a : c) : b;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("Greatest value among %d and %d and %d is %d", a,b,c,greatest_value);
}
