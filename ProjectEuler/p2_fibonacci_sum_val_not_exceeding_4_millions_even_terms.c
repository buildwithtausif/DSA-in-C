#include <stdio.h>
// Program: To find sum of even fibonacci numbers not exceeding 4 million

// Approach 1: Checking for even numbers
// int main() {
//     int limit = 4000000, termA = 1, termB = 1, nextTerm = termA + termB, sum = 2;
//     while (nextTerm <= limit) {
//         termA = termB;
//         termB = nextTerm;
//         nextTerm = termA + termB;
//         if (nextTerm % 2 == 0) {
//             sum += nextTerm;
//         }
//     }
//     return sum;
// }

// Approach 2: avoiding any checks
// Key: every third fibonacci number is even
// termA is the former
// termB is the latter
// nextTerm is the sum of former + latter;
int main() {
    int limit = 4000000, termA = 1, termB = 1, nextTerm = termA + termB, sum = 0;
    while (nextTerm <= limit) {
        sum += nextTerm;
        termA = termB + nextTerm;
        termB = nextTerm + termA;
        nextTerm = termA + termB;
    }
    return sum;
}