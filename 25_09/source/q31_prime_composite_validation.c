// WAP to determine if a given number is prime or composite
/*
 breif:-
 	prime_numbers = whole numbers greater than 1 which have only two factors 1 and itself.
 	composite_numbers = whole numbers greater than 1 which have atleast 3 factors where one factor is different from 1 and the number itself.
*/
#include <stdio.h>

int main() {
	int num;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("Please enter a number: ");
	scanf("%d", &num);
	if (num < 1) {
		printf("number must be greater than 1!");
	} else {
	   // main-logic, "Primarity Test"
	   if (num == 2 || num == 3) {
	   		printf("it's a prime number");
	   } else {
	   	   int i;
	   	   int isPrime = 1; // flag asssuming it's a prime
		   for (i = 2; i*i <= num; i++) {
		   		if (num % i == 0) {
		   				isPrime = 0; // flag not a prime
		   				break;
				} 
		    }
			if (isPrime == 1) {
	            printf("%d is a prime number\n", num);
	        } else {
	            printf("%d is a composite number\n", num);
	        }
	   }
	   
	}
	return 0;
}