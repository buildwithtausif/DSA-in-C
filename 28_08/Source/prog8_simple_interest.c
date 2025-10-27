//Prog8: Simple interest Program
#include <stdio.h>

#define I_RATE 3.6

int main() {
	float p = 1200.0;
	float d = 2.0; 
	
	float simple_interest;
	simple_interest = 0.0;
	simple_interest = p*I_RATE*d;
	float final_si = 0.0;
	final_si = simple_interest/100;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("simple interest for amt= %f with interest rate of %f for %f years is = %f", p, I_RATE, d, final_si);
}
