// WAP construct and print reverse of n-digit number using do-while loop.
/*
 ig i need make something like this, if n = 18 y = 81, basically to reverse the digit
*/
#include <stdio.h>
#include <string.h>
int main() {
	int number, reverse_num = 0, digit;
	printf("By Tausif Alam, BCA-1EA\n");
	printf("Please enter an integer: ");
	scanf("%d", &number);
	int temp = number;
	// now to reverse the digit, we'll be required to extract unit digit and assemble it in reverse direction in respect of the forward_digit
	// that means if we have n-digits then we have to extract each and store it somewhere to concatenate it later ig?
	if (number == 0) {
		reverse_num = 0;
	} else {
		do {
			digit = number % 10;
			reverse_num = (reverse_num * 10) + digit; // convert ones to tens and so on i.e. shift leftwards
			number /= 10; // remove last digit
		} while (number > 0);	
	}	
	printf("The reverse of %d is %d", temp,reverse_num);
	return 0;
}