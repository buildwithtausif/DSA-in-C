/*
 * Program: [Maximum and minimum integer in an array]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 30.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
	int size;
	printf("Please enter size of array: ");
	scanf("%d", &size);
	// size of the number-array is defined by the user
	long int numArray[size];
	// get user-input for elements in array of provided size
	int itterator;
	for (itterator = 0; itterator < size; itterator++) {
		printf("Please enter element-%ld: ", itterator+1);
		scanf("%ld", &numArray[itterator]);
	}
	// print array and output(s)
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	itterator = 0; // reset itterator
	printf("Provided array = ");
	for ( ; itterator < size; itterator++) {
		printf("%ld ", numArray[itterator]);
	}
	// find greatest of all elements
	itterator = 0; // reset itterator
	long int max = numArray[0];
	for ( ; itterator < size; itterator++) {
		if (numArray[itterator] > max) {
			max = numArray[itterator];
		}
	}
	printf("\nMaximum: %ld", max);
	// find least of all elements
	itterator = 0; // reset itterator
	long int min = numArray[0];
	for ( ; itterator < size; itterator++) {
		if (numArray[itterator] < min) {
			min = numArray[itterator];
		}
	}
	printf("\nMinimum: %ld", min);
    return 0;
}