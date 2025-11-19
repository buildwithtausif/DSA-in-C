/*
 * Program: [Program to define a structure stores and write a function update() to change the values of its members. (Pass structure to update() and return structure.)]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 11.Month . "-" . 17.Day . "
 */

#include <stdio.h>
typedef struct {
	char employees[100];
	int salaries;
} salaryRecords;
// update salaries
salaryRecords update(salaryRecords emp) {
    printf("Enter updated salary for %s: ", emp.employees);
    scanf("%d", &emp.salaries);
    return emp;
}

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    printf("Enter size of your company: ");
    int size, i;
    scanf("%d", &size);
    // gives size of the company
	salaryRecords records[size];
	printf("Enter Employee names & Salaries: ");
	
	for (i = 0; i < size; i++) {
		scanf("%s %d", records[i].employees, &records[i].salaries);
	}
	
	printf("\n\n-------------------OUTPUT-BEFORE-UPDATE-------------------\n\n");
	printf("\n\nEmployee Name         Salary \n\n");
	i = 0;
	while (i < size) {
		printf("%s       %d\n", records[i].employees, records[i].salaries);
		i++;
	}
	// trigger update function()
	for (i = 0; i < size; i++) {
    	records[i] = update(records[i]);
	}
	printf("\n\n-------------------OUTPUT-AFTER-UPDATE-------------------\n\n");
	printf("\n\nEmployee Name        Salary \n\n");
	for (i = 0; i < size; i++) {
    	 printf("%s         %d\n", records[i].employees, records[i].salaries);
	}
    return 0;
}