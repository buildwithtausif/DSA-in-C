// WAP to find if a number is odd or even using conditonal operator
#include <stdio.h>
int main() {
	// my idea is to evaluate the problem using user input instead of hard coded values 
	int val = 0;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("to find if a number is odd or even using conditonal operator\n\n");
	printf("Enter any valid integer value: ");
	scanf("%d", &val);
	
	// ternary statement
	(val % 2 == 0) ? printf("%d is even", val) : printf("%d is odd", val);
	return 0;
}
