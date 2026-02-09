#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * sparse_matrix: If a matrix is having "more than half elements are zero" then it is called a sparse matrix.
 * if a matrix is sparse then convert it into a triplex matrix
 *
 * So, the first requirement is to have a matrix
 * In this program we will generate triplex matrix of a sparse matrix using CMO approach
 */
int main() {
    /*
     * a note for variable abbriviations used
     * rowTM = row of the triplex_matrix
     * nonZero = occurences of the non-zero element in the originalMatrix (to be declared at run-time)
     * i = row counter iteration variable
     * j = column counter iteration variable
     * row = the number of the rows in the originalMatrix (to be taken from user)
     * col = the number of the column in the originalMatix (to be taken from the user)
    */
    int row, col, i, j, nonZero = 0, rowTM=0;
    // ask the size of matrix from the user
    printf("\nPlease enter number rows in matrix: ");
    scanf("%d", &row);
    printf("\nPlease enter number of columns in matrix: ");
    scanf("%d", &col);
    // now create a matrix of provided MxN size
    int originalMatrix[row][col];

    // take values in the originalMatrix
    printf("Working on %dx%d matrix: \n\n", row, col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("\nEnter values for row-%d col-%d: ", i,j);
            scanf("%d", &originalMatrix[i][j]);
            // count the number of non-zero elements in the matrix
            if (originalMatrix[i][j] != 0) {
                nonZero++;
            }
        }
    }
    // print the matrix
    printf("Given Matrix: \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", originalMatrix[i][j]);
        }
        printf("\n");
    }
    // to check if the given matrix is a sparse matrix (go by the definition of sparse matrix)
    int const halfCount = ceil((row*col)/2);
    if (nonZero > halfCount) {
        printf("Not a sparse matrix");
        exit(0);
    } else {
        // declare triplexMatrix
        int triplexMatrix[nonZero+1][3];
        // using RMO approach
        triplexMatrix[rowTM][0] = col;
        triplexMatrix[rowTM][1] = row;
        triplexMatrix[rowTM][2] = nonZero;

        // now fill this matrix for each non-zero occurrences in the originalMatrix
        for (i = 0; i < row; i++) {
            for (j = 0; j < 3; j++) {
                if (originalMatrix[j][i] != 0) {
                    rowTM++; // increment the row of triplex matrix and fill it
                    triplexMatrix[rowTM][0] = j; // column number
                    triplexMatrix[rowTM][1] = i; // row number
                    triplexMatrix[rowTM][2] = originalMatrix[j][i]; // the non-zero value found
                }
            }
        }
        // now print the triplex matrix
        printf("\nThe triplex matrix: \n");
        for (i = 0; i < rowTM; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d\t", triplexMatrix[i][j]);
            }
            printf("\n");
        }
    }
}