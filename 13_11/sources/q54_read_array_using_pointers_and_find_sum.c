/*
 * Program: [Read array using pointers, and find the sum of its elements]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 13.Day . "
 */

#include <stdio.h>
int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
	// if I'm understanding it correctly it is saying to point a pointer to an array and read its values and find its elements
	printf("Please enter number of elements you want?: ");
	int size, i, sum = 0;
	scanf("%d", &size);
	// set array length
	int array[size];
	printf("Enter array elements: ");
	for (i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}
	int *p;
	p = array; // init with base address
	printf("Element VALUE ADDRESS\n\n");
	i = 0;
	while (i < size) {
		printf(" x[%d] %d %u\n", i, *p, p);
		sum += *p;
		i++, p++;
	}
	printf("\n Sum = %d\n", sum);
    return 0;
}