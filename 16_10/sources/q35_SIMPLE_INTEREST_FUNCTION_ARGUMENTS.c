/*
 * Program: [Create simple interest function with arguments and return type]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 16.Day . "
 */

#include <stdio.h>
// function declaration
int si(int principal, int roi, int timeSpan); // simple interest function

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    // variable declarations
    int p,r,t;
	printf("Please enter principal amount: ");
	scanf("%d", &p);
	printf("Please enter rate-of-interest: ");
	scanf("%d", &r);
	printf("Please enter duration of loan: ");
	scanf("%d", &t);
	// call simple-interest function
	si(p, r, t);
    return 0;
}
int si(int p, int r, int t) {
	int interest = 0;
	int amount = p;
	// calc interest
	interest = (p*r*t) / 100;
	amount += interest;
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	printf("Interest amount: %d\n", interest);
	printf("Total payable amount (including interest): %d\n", amount);
	return 0;
}