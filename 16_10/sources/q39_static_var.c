/*
 * Program: [Program to show usage of static variable]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 16.Day . "
 */

#include <stdio.h>

void staticTest() {
	static int count = 0;
	count++;
	printf("Function called %d times\n", count);
}
int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
	staticTest();
	staticTest();
	staticTest();
	staticTest();
	staticTest();

    return 0;
}