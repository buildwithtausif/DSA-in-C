//to find grades on the basis of marks, using if-else and relational operators
#include <stdio.h>
int main() {
	int obt_marks = 0; // obtained marks of the candidate, initialized as zero
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("Please enter your aggregate marks out of 100: ");
	scanf("%d", &obt_marks);
	
	if (obt_marks >= 80) {
		printf("Honours is awarded");
	} else if (obt_marks >= 60) {
		printf("First division is awarded");
	} else if (obt_marks >= 50) {
		printf("Second division is awarded");
	} else if (obt_marks >= 40) {
		printf("Third division is awarded");
	} else {
		printf("FAIL!!!");
	}
	
	return 0;
}
