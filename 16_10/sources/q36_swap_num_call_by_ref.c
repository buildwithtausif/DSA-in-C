/*
 * Program: [swap two numbers by using call-by-reference (pointers) concept]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 16.Day . "
 */

#include <stdio.h>
// function def
int * swap(int *num1, int *num2); 

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
	int num1, num2;
	printf("Please enter number1: ");
	scanf("%d", &num1);
	printf("Please enter number2: ");
	scanf("%d", &num2);
    // call swap function
    swap(&num1, &num2);

    return 0;
}
int * swap(int *num1, int *num2) {
	int storeVal = *num1;
	printf("\n\n-------------------Before-------------------\n\n");
	printf("number1 = %d\nnumber2 = %d", *num1, *num2);
	*num1 = *num2;
	*num2 = storeVal;
	printf("\n\n-------------------AFTER-------------------\n\n");
	printf("number1 = %d\nnumber2 = %d", *num1, *num2);
	return 0;
}