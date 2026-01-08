#include <stdio.h>

int main() {
    long long int i = 1;
    long long int sum = 0;

    for ( ; i <= 736000; i++) {
        if (i*i % 2 != 0) {
            sum += i*i;
        }
    }
    printf("%lld", sum);
    return 0;
}