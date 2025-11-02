/*
 * Program: [Matix Operation - 2D array]
 * Author:  Tausif Alam, BCA-1EA
 * Date:    " . 2025.Year . "-" . 10.Month . "-" . 30.Day . "
 */

#include <stdio.h>
// function def
int m_add();
int m_sub();
int m_prod();
int m_transpose();

int main() {
    printf("Tausif Alam, BCA-1EA\n\n");
    int choice;
	// menu
	printf("\n\n-------------------Matrix Operations-------------------\n\n");
	printf("\n1. Matrix Addition\n2. Matrix Subtraction\n3. Matrix Multiplication\n4. Transpose of a Matrix");
	// retake input if invalid choice goto-statement flag
	option_scan: 
	printf("\n\nPlease select an option: ");
	scanf("%d", &choice);
	// handle input-choices
	switch (choice) {
		case 1: m_add();
				break;
		case 2: m_sub();
				break;
		case 3: m_prod();
				break;
		case 4: m_transpose();
				break;
		default: printf("Error: not a valid input!");
				 goto option_scan;
				 break;
				 
	}
    return 0;
}
int m_add() {
	// flag for goto
	get_sizes: 
	printf("\n\n-------------------SIZE OF MATRIX-1-------------------\n\n");
	int m,n;
	printf("Please enter rows (m): ");
	scanf("%d", &m);
	printf("Please enter cols (n): ");
	scanf("%d", &n);
	printf("\n\n-------------------SIZE OF MATRIX-2-------------------\n\n");
	int j,k;
	printf("Please enter rows (j): ");
	scanf("%d", &j);
	printf("Please enter cols (k): ");
	scanf("%d", &k);
	printf("\nWorking on %dx%d matrix and %dx%d matrix", m,n,j,k);
	
	// check for valid sizes
	if (m != j || n != k) {
		printf("Invalid matrix(s)!");
		goto get_sizes;
	}
	// setup 2d matrix and get values
	int matrix1[m][n], matrix2[j][k];
	// get values for first matrix
	int core_counter, inner_counter;
	printf("\n\n-------------------VALUES OF MATRIX-1-------------------\n\n");
	for (core_counter = 0; core_counter < m; core_counter++) {
		printf("\nPlease enter %d values of row%d: ", n,core_counter + 1);
		for (inner_counter = 0; inner_counter < n; inner_counter++) {
			scanf("%d", &matrix1[core_counter][inner_counter]);
		}	
	}
	// get values for second matrix
	printf("\n\n-------------------VALUES OF MATRIX-2-------------------\n\n");
	for (core_counter = 0; core_counter < j; core_counter++) {
		printf("\nPlease enter %d values of row%d: ", k,core_counter + 1);
		for (inner_counter = 0; inner_counter < k; inner_counter++) {
			scanf("%d", &matrix2[core_counter][inner_counter]);
		}	
	}
	// after getting values of both create a new matrix after and insert sum of m1 and m2
	int sumMatrix[m][n];
	for (core_counter = 0; core_counter < m; core_counter++) {
		for (inner_counter = 0; inner_counter < n; inner_counter++) {
			sumMatrix[core_counter][inner_counter] = matrix1[core_counter][inner_counter] + matrix2[core_counter][inner_counter];
		}
	}
	printf("\n\n-------------------SUM OF MATRIX 1&2-------------------\n\n");
	for (core_counter = 0; core_counter < m; core_counter++) {
		printf(" | ");
		for (inner_counter = 0; inner_counter < n; inner_counter++) {
			printf("%3d", sumMatrix[core_counter][inner_counter]);
		}
		printf(" | ");
		printf("\n");
	}
	return 0;
}
int m_sub() {
		// flag for goto
	get_sizes: 
	printf("\n\n-------------------SIZE OF MATRIX-1-------------------\n\n");
	int m,n;
	printf("Please enter rows (m): ");
	scanf("%d", &m);
	printf("Please enter cols (n): ");
	scanf("%d", &n);
	printf("\n\n-------------------SIZE OF MATRIX-2-------------------\n\n");
	int j,k;
	printf("Please enter rows (j): ");
	scanf("%d", &j);
	printf("Please enter cols (k): ");
	scanf("%d", &k);
	printf("\nWorking on %dx%d matrix and %dx%d matrix", m,n,j,k);
	
	// check for valid sizes
	if (m != j || n != k) {
		printf("Invalid matrix(s)!");
		goto get_sizes;
	}
	// setup 2d matrix and get values
	int matrix1[m][n], matrix2[j][k];
	// get values for first matrix
	int core_counter, inner_counter;
	printf("\n\n-------------------VALUES OF MATRIX-1-------------------\n\n");
	for (core_counter = 0; core_counter < m; core_counter++) {
		printf("\nPlease enter %d values of row%d: ", n,core_counter + 1);
		for (inner_counter = 0; inner_counter < n; inner_counter++) {
			scanf("%d", &matrix1[core_counter][inner_counter]);
		}	
	}
	// get values for second matrix
	printf("\n\n-------------------VALUES OF MATRIX-2-------------------\n\n");
	for (core_counter = 0; core_counter < j; core_counter++) {
		printf("\nPlease enter %d values of row%d: ", k,core_counter + 1);
		for (inner_counter = 0; inner_counter < k; inner_counter++) {
			scanf("%d", &matrix2[core_counter][inner_counter]);
		}	
	}
	// after getting values of both create a new matrix after and insert difference of m1 and m2
	int diffMatrix[m][n];
	for (core_counter = 0; core_counter < m; core_counter++) {
		for (inner_counter = 0; inner_counter < n; inner_counter++) {
			diffMatrix[core_counter][inner_counter] = matrix1[core_counter][inner_counter] - matrix2[core_counter][inner_counter];
		}
	}
	printf("\n\n-------------------DIFFERENCE OF MATRIX 1&2-------------------\n\n");
	for (core_counter = 0; core_counter < m; core_counter++) {
		printf(" | ");
		for (inner_counter = 0; inner_counter < n; inner_counter++) {
			printf("%3d", diffMatrix[core_counter][inner_counter]);
		}
		printf(" | ");
		printf("\n");
	}
	return 0;
}
int m_prod() {
		// flag for goto
	get_sizes: 
	printf("\n\n-------------------SIZE OF MATRIX-1-------------------\n\n");
	int m,n;
	printf("Please enter rows (m): ");
	scanf("%d", &m);
	printf("Please enter cols (n): ");
	scanf("%d", &n);
	printf("\n\n-------------------SIZE OF MATRIX-2-------------------\n\n");
	int j,k;
	printf("Please enter rows (j): ");
	scanf("%d", &j);
	printf("Please enter cols (k): ");
	scanf("%d", &k);
	printf("\nWorking on %dx%d matrix and %dx%d matrix", m,n,j,k);
	
	// check for valid sizes
	if (m != j || n != k) {
		printf("Invalid matrix(s)!");
		goto get_sizes;
	}
	// setup 2d matrix and get values
	int matrix1[m][n], matrix2[j][k];
	// get values for first matrix
	int core_counter, inner_counter;
	int sum_iterator;
	printf("\n\n-------------------VALUES OF MATRIX-1-------------------\n\n");
	for (core_counter = 0; core_counter < m; core_counter++) {
		printf("\nPlease enter %d values of row%d: ", n,core_counter + 1);
		for (inner_counter = 0; inner_counter < n; inner_counter++) {
			scanf("%d", &matrix1[core_counter][inner_counter]);
		}	
	}
	// get values for second matrix
	printf("\n\n-------------------VALUES OF MATRIX-2-------------------\n\n");
	for (core_counter = 0; core_counter < j; core_counter++) {
		printf("\nPlease enter %d values of row%d: ", k,core_counter + 1);
		for (inner_counter = 0; inner_counter < k; inner_counter++) {
			scanf("%d", &matrix2[core_counter][inner_counter]);
		}	
	}
	// after getting values of both create a new matrix after and insert product of m1 and m2
	int prodMatrix[m][n];
	for (core_counter = 0; core_counter < m; core_counter++) {
		for (inner_counter = 0; inner_counter < k; inner_counter++) {
			prodMatrix[core_counter][inner_counter] = 0;
			
			for (sum_iterator = 0; sum_iterator < n; sum_iterator++) { // n == j
				prodMatrix[core_counter][inner_counter] += matrix1[core_counter][sum_iterator] * matrix2[sum_iterator][inner_counter];
			}
		}
	}
	printf("\n\n-------------------PRODUCT OF MATRIX 1&2-------------------\n\n");
	for (core_counter = 0; core_counter < m; core_counter++) {
		printf(" | ");
		for (inner_counter = 0; inner_counter < k; inner_counter++) {
			printf("%3d", prodMatrix[core_counter][inner_counter]);
		}
		printf(" | ");
		printf("\n");
	}
	return 0;
}
int m_transpose() {
	printf("\n\n-------------------SIZE OF MATRIX-------------------\n\n");
	int m,n;
	printf("Please enter rows (m): ");
	scanf("%d", &m);
	printf("Please enter cols (n): ");
	scanf("%d", &n);
	// setup 2d matrix and get values
	int matrix1[m][n];
	// get values for first matrix
	int core_counter, inner_counter;
	printf("\n\n-------------------VALUES OF MATRIX-------------------\n\n");
	for (core_counter = 0; core_counter < m; core_counter++) {
		printf("\nPlease enter %d values of row%d: ", n,core_counter + 1);
		for (inner_counter = 0; inner_counter < n; inner_counter++) {
			scanf("%d", &matrix1[core_counter][inner_counter]);
		}	
	}
	// after getting values of matrix create a new matrix after and insert transpose of m1
	int transposeMatrix[m][n];
	for (core_counter = 0; core_counter < n; core_counter++) {
		for (inner_counter = 0; inner_counter < m; inner_counter++) {
			transposeMatrix[core_counter][inner_counter] = matrix1[inner_counter][core_counter];
		}
	}
	printf("\n\n-------------------TRANSPOSE OF MATRIX-------------------\n\n");
	for (core_counter = 0; core_counter < m; core_counter++) {
		printf(" | ");
		for (inner_counter = 0; inner_counter < n; inner_counter++) {
			printf("%3d", transposeMatrix[core_counter][inner_counter]);
		}
		printf(" | ");
		printf("\n");
	}
	return 0;
}