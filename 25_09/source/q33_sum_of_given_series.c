//WAP to print sum of series 1+1/2+...+1/n, using for loop
#include <stdio.h>
int main() {
	int range;
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("To find the sum of this series: 1+1/2+...+1/n\n\n");
	printf("Please provide the range: ");
	scanf("%d", &range);
	
	float sum = 0;
	float i;
	for (i = 1; i <= range; i++) {
		sum += 1/i;
	}
	printf("Sum of the expression till range %d is %f", range, sum);
	return 0;
}