// #include <stdio.h>
// #include <math.h>
// int isPrime(__int64 num) {
//     if (num <= 1) {
//         return 0; // false
//     }
//
//     if (num == 2) {
//         return 1; // true
//     }
//
//     for (__int64 i = 2; i*i <= num; i++) {
//         if (num % i == 0) {
//             return 0; // false
//         }
//     }
//
//     return 1; // true, if no divisors are found it's a prime;
//
// }
// int main() {
//     __int64 n=600851475143L;
//     int index = 0;
//     int divisorArray[n];
//     printf("Prime Factors of %lld are: ", n);
//     for (int i = 2; i<=n; i++) {
//         if (isPrime(i) && n % i == 0) {
//             divisorArray[index] = i;
//             n /= i;
//             printf(" %d ", divisorArray[index]);
//             index++;
//         }
//     }
//
//
//     return 0;
// }

#include <stdio.h>
int main() {
    __int64 n = 600851475143L;
    int lastfactor;
    if (n % 2 == 0) {
        n /= 2;
        lastfactor = 2;
        while (n % 2 == 0) {
            n /= 2;
        }
    } else {
        lastfactor = 1;
    }
    int factor = 3;
    while (n > 1) {
        if (n % factor == 0) {
            n /= factor;
            lastfactor = factor;
            while (n % factor == 0) {
                n /= factor;
            }
        }
        factor = factor + 2;
    }

    return lastfactor;
}