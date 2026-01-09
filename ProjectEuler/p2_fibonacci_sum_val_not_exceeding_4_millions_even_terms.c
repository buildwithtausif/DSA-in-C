#include <stdio.h>
// Program: To find sum of even fibonacci numbers not exceeding 4 million
int main() {
    int limit = 4000000, term1 = 1, term2 = 1, nextTerm = term1 + term2, sum = 2;
    while (nextTerm <= limit) {
        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
        if (nextTerm % 2 == 0) {
            sum += nextTerm;
        }
    }
    return sum;
}
