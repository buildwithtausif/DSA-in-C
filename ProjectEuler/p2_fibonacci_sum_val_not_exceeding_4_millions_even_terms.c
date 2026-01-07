#include <stdio.h>

// specialised fibonacci sequence finder function
int fibonacciNums(int *range);
// summation handler function to perform additions on large-ranged data
long long int sumOfLargeSet(int *numArray[]);
int main() {
    // get the range
    int givenRange = 0;
    // get the range from user at the run time
    printf("Enter a range for the fibonacci sequence: ");
    scanf("%d", &givenRange);
    // get a pointer and point it towards givenRange
    int *range = &givenRange;
    /*
     * how it's going to work?
     * initial-idea is that this fiboncaiNums() should
     * return array of integers of fibonacci-sequence
     * performing sanitization to filter-out all even numbers in the set
     * then this is then shared with sumOfLargeSet()
     */
    // array of numbers with size of the pointer range
    int numberArray[*range];
    for (int elementPos = 0; elementPos < *range; elementPos++) {
        numberArray[elementPos] = fibonacciNums(range);
    }
    // expected: by now I should've all the fibonacci numbers of that given range in the array
    // perform sanitization to filter out only even numbers
    /*
     * some math joke time
     *
     * for "consecutive-numbers" as in fibonacci
     * to get the size of evenNumArray
     * assume we've n-numbers in the numberArray
     * then the number of even integers in that range
     * is either n/2 or (n+1)/2 or (n-1)/2 depending on the situation
     * when is what? (in context)
     * when range is "even" then number of even-numbers in that array is n/2
     * when range is "odd"
     * case1: starts with even & ends with even => (n+1)/2
     * case2: starts with odd & ends with odd => (n-1)/2
     */
    int modularSize = 0;
    // if range is even
    if (*range % 2) {
        modularSize = *range / 2;
    } else {
            // case1: n is odd, and it's starting & ending positioned number is even
        if (numberArray[0] % 2 && numberArray[*range] % 2) {
            modularSize = (*range + 1) / 2;
        } else {
            // case1: n is odd, and it's starting & ending positioned number is odd
            modularSize = (*range - 1) / 2;
        }
    }
    // great hopefully handled that edge case, now declaring evenNumArray with a modularSize
    int evenNumArray[modularSize];
    for (int index = 0; index < *range; index++) {
        if (numberArray[index] % 2) {
            // push this filtered number into even number array
            evenNumArray[index] = numberArray[index];
        }
    }
    // ohk let me make the pointer to this evenNumArray
    // pointer to array of int
    int (*evenArray)[modularSize] = &evenNumArray;
    // call the summation function & pass this pointer to this function
    long long int result = sumOfLargeSet(evenArray);
    // print the result of sum
    printf("sum of even fib-numbers in range %d is: %lld", *range, result);
}