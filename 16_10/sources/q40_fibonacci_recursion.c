/*
 * Program: [Fibonacci using recursion]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 16.Day . "
 */

#include <stdio.h>
// function def
int fibonacci(int range);

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    int range = 0;
	printf("Please enter range to print fibonacci series: ");
	scanf("%d", &range);
	int i;
	printf("fibonacci series: ");
	for (i = 0; i < range; i++) {
		printf("%d ", fibonacci(i));
	}
    return 0;
}
int fibonacci(int range) {
	int fib = 0;
	if (range == 0) {
		return 0;
	} else if (range == 1) {
		return 1;
	} else {
		fib = fibonacci(range - 1) + fibonacci(range - 2);
		return fib;
	}
}