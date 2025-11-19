/*
 * Program: [ Program to enter employee salary records, using structures. Create array of structures ]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 17.Day . "
 */

#include <stdio.h>
typedef struct {
	char employees[100];
	int salaries;
} salaryRecords;
int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    printf("Enter size of your company: ");
    int size, i;
    scanf("%d", &size);
    // gives size of the company
	salaryRecords records[size];
	printf("Enter Employee names: ");
	
	for (i = 0; i < size; i++) {
		scanf("%s %d", records[i].employees, &records[i].salaries);
	}
	
	printf("\n\n-------------------OUTPUT-------------------\n\n");
	printf("\n\n %10 Employee Name %10 Salary \n\n");
	i = 0;
	while (i < size) {
		printf("%10s %10d\n", records[i].employees, records[i].salaries);
		i++;
	}
    return 0;
}