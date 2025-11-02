/*
 * Program: [Implement a function printline(int n, char ch) to print 'ch' n-times]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 16.Day . "
 */

#include <stdio.h>
// function defs
int printline(int n, char ch); // prints 'ch' n-times
int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    char character;
    int iteration = 0;
	printf("Please enter character to print: ");
	scanf("%c", &character);
	printf("\nHow many times to print?: ");
	scanf("%d", &iteration);
	printline(iteration, character);
    return 0;
}
int printline(int n, char ch) {
	int counter = 0;
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	while (counter < n) {
		printf("%c", ch);
		counter++;
	}
	return 0;
}