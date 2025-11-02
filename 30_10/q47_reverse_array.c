/*
 * Program: [Generate Reverse of Array]
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
	itterator = 0; // reset itterator
	printf("\nProvided array = ");
	for ( ; itterator < size; itterator++) {
		printf("%ld ", numArray[itterator]);
	}
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	itterator = size - 1; // reset itterator
	long int rArray[size], extracted_nums, j = 0;
	printf("\nReverse array = ");
	for ( ; itterator >= 0; itterator--) {
		extracted_nums = numArray[itterator];
		// push extracted 
		rArray[j] = extracted_nums;
		// print
		printf("%d ", rArray[j]);
		j++;
	}
    return 0;
}