// WAP to computer x^n using while statement
/*
	 scan x and n from user and find exponent n of x using while loop
	 step 1: scan
	 step2: x multiplied n times ====> loop will run till n that is we will have another loop variable
*/
#include <stdio.h>

int main() {
	int x,n;
	// 0^0 is undefined
	printf("By Tausif Alam, BCA-1EA\n\n");
	x = 0; 
	n = 0; 
	printf("Please enter base and exponent respectively: ");
	scanf("%d %d", &x, &n);
	
	// declare loop variable
	int i = 0;
	// declare exponent_value var
	int answer = 1;
	while (i < n) {
	/*
		say x = 2, n = 2 then 
		@i=0 n is 2 => answer = 1*x i.e. 1*2 = 2
		@i=1 n is 2 => answer = 2*x i.e. 2*2 = 4
		@i=4 [Loop stops]
		
		we get answer = 4, which is 2^2 
	*/	
		answer *= x;
		i++;
	}
	printf("%d", answer);
	return 0;
}
