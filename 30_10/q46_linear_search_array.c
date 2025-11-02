/*
 * Program: [Perform linear-search on an array of integer data type only]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 30.Day . "
 */

#include <stdio.h>

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
	int size, query, found = 0;
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
	// trigger search query
	printf("\n\nPlease enter query to find its position inside the array: ");
	scanf("%d", &query);
	itterator = 0; // reset itterator
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	for ( ; itterator < size; itterator++) {
		if (numArray[itterator] == query) {
			printf("%d is found at position %d", query, itterator + 1);
			found = 1;
			break;
		}
	}
	if (!found) {
		printf("Element not found in the array!");
	}

    return 0;
}