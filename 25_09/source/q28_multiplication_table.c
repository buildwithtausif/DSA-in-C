//WAP to generate multiplication table using nested do-while
/*
	base-logic, outerloop = number of rows
				innerloop = number of coloumns
*/
#include <stdio.h>

int main() {
	printf("By Tausif Alam, BCA-1EA\n\n");
	int rows = 0;
	int col;
	int range = 1; // minimum of table 1
	printf("Please provide the range: ");
	scanf("%d", &range);
	// print 1 to 15 tables
	do {
		rows++;
		col = 0;
		do {
			col++;
			printf("%-4d", rows*col);
			printf("");
		} while (col < range);
		printf("\n");
	} while (rows < 10);
	return 0;
}
