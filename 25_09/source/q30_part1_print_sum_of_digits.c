// WAP to read an integer and print sum of its digits using while loop. 
#include <stdio.h>
int main() {
	int number;
	printf("By Tausif Alam, BCA-1EA\n");
	printf("Enter an integer: ");
	scanf("%d", &number);
	int sum = 0;
	int saved_num = number;
	
	while (number > 0) {
		sum += (number % 10);
		number /= 10;
	}
	printf("Sum of digits of %d is: %d", saved_num, sum);
	return 0;
}