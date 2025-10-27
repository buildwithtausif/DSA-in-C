//WAP to print sum of first n odd natural numbers using for loop
/*
	odd number expression = 2n-1
*/
#include <stdio.h>
int main() {
	int max;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("Please add max-range for sum: ");
	scanf("%d", &max);
	int i;
	int odd_sum = 0;
	for (i = 1; i <= max; i++) {
		odd_sum += (2*i-1);
	}
	printf("Sum of %d odd natural numbers is %d\n", max, odd_sum);
	// Fun fact: The sum of the first n odd numbers is always n*n
    printf("Mathematical shortcut check: %d * %d = %d\n", max, max, max * max);
	return 0;
}