// To find if a given number is Armstrong number or not, using while loop
/*
	 this program is valid only for three digit numbers
*/
/*
	variation is print all armstrong numbers between 100 - 999
	ex- 153 = 1^3 + 5^3 + 3^3 == 153 --- this is an armstrong number
	
	step1: is to extract digits
	step2: is to check the validity
	step3: print range
*/
#include <stdio.h>
int main() {
	int n = 0; // store for entered values by user
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("Please enter a valid integer: ");
	scanf("%d", &n);
	int temp = n; // hold value of n for later comparison
	int armstrong_sum = 0, extracted_digit = 0;
	// run the loop till n becomes 0
	while (n > 0) {
		// extract digits
		extracted_digit = n % 10; // extracts the unit digit of each n, if n = 153 => extracted_digit = 3
		n /= 10; // holds the leftout digits after unit extraction i.e now n becomes 15
		
		armstrong_sum += extracted_digit*extracted_digit*extracted_digit;
	}
	if (armstrong_sum == temp) {
		printf("It's a valid armstrong number!");
	} else {
		printf("It's not a valid armstrong number!");
	}
	printf("\n");
	// print all armstrong number b/w 100 - 999
	printf("all armstrong number b/w 100 - 999: ");
	for (int n = 100; n <= 999; n++) {
		temp = n;
		armstrong_sum = 0;
		// run the loop till n becomes 0
		while (temp > 0) {
			// extract digits
			extracted_digit = temp % 10; // extracts the unit digit of each n, if n = 153 => extracted_digit = 3
			temp /= 10; // holds the leftout digits after unit extraction i.e now n becomes 15
			
			armstrong_sum += extracted_digit*extracted_digit*extracted_digit;
		}
		if (armstrong_sum == n) {
			printf("%d ", n);
		}
	
	}
	
	
	
	return 0;
}


