/*
 * Logic(core)
 * > Check for if a number is composite -- true then => not a prime
 */

#include <stdio.h>
#include <math.h>
int main() {
    int userInput, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &userInput);

    if (userInput <= 1) {
        printf("%d is neither prime nor composite.", userInput);
    }

    int i;
    for (i = 2; i <= sqrt(userInput); i++) {
        if (userInput % i == 0) {
            flag = 1; // set flag to true if any factor is found
            break;;
        }
    }

    if (flag) {
        printf("%d is a composite number", userInput);
    } else {
        printf("%d is a prime number.", userInput);
    }

    return 0;
}
