
/*
 * Program: [Factorial of a number using function and returing its value in the calling function]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 16.Day . "
 */

#include <stdio.h>
// function def
long long int factorial(int num);
int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
	int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	int output;
	output = factorial(number);
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	printf("Factorial of %d is %d", number, output);
    return 0;
}
long long int factorial(int num) {
	int fact = 1,i;
	if (num == 1 || num == 0) {
		return 1;
	}
	for (i = 1; i <= num; i++) {
		fact *= i;
	}
	return fact;
}