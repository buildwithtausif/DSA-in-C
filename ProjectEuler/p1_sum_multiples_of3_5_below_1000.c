// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9.
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>
// int exists(int arr[], int size, int x) {
//     for (int j = 0; j < size; j++) {
//         if (arr[j] == x) return 1;
//     }
//     return 0;
// }
int main() {
    // first lets print multiples of 3 or 5 below 10
    // int count=0;
    int sum=0;
    // int multiples[1000]={0};
    int i;
    const int limit = 1000;
    // generate multiples of 3
    // for (i = 0; i < limit; i += 3) {
    //     if (i != 0) {
    //         multiples[count++] = i;
    //     }
    // }
    // generate multiples of 5 and check if already exists in the array
    // for (i = 0; i < limit; i += 5) {
    //     if (i != 0 && !exists(multiples, count, i)) {
    //         multiples[count++] = i;
    //     }
    // }
    // // now to get the sum
    // for (i = 0; i < count; i++) {
    //     sum += multiples[i];
    // }
    // direct sum
    for (i = 0; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    // print
    // printf("Multiples of 3 or 5 less than 1000: ");
    // for (i = 0; i < count; i++) {
    //     printf("%d ", multiples[i]);
    // }
    printf("\nSum of these multiples: ");
    printf("%d", sum);
    return 0;
}