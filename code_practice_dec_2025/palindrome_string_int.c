/*
 * What is a palindrome?
 * a number or a string when mirrored remains same that is there is no noticeable change then
 * those number or a string is called as a palindrome.
 *
 * example: 151 | 151 or MADAM | MADAM
 *
 * Logic (core):
 * > Extract units and create reverse objects
 * > for integer:  extract unit digits and re-align in reverse order
 *                 then draw comparison.
 * > for strings:  create string reverse and compare
 * (Logic) => "string" , assumption user enters one string at a time
 *                       compare string until the mid-position from left-major to right-major position
 *                       how?
 *                       @string[stringLength] = '\0';
 *                       LOOP:
 *                       i = 0 until i < stringLength/2
 *                          if string[i] != string[i - 1 - stringLength]
 *                              true: flag = 0;
 *                                    break;
 *                              false: flag = 1;
 *                      END:
 *                      if flag = 1 => a palindromic string
 *
 */
#include <stdio.h>
#include <string.h>

int stringPalin();
int main() {
    // palindromic numbers
    int userInput = 0;
    printf("Enter number: ");
    scanf("%d", &userInput);
    int reverseInt = 0, unitDigit = 0, cmpVal = 0;
    // set cmpVal to userInput for later comparison
    cmpVal = userInput;
    while (userInput > 0) {
        unitDigit = userInput % 10;
        userInput /= 10;
        reverseInt = (reverseInt * 10) + unitDigit;
    }
    if (cmpVal == reverseInt) {
        printf("%d is a palindromic number", cmpVal);
    } else {
        printf("%d is not a valid palindromic number", cmpVal);
    }
    printf("\n");
    stringPalin();
    return 0;
}

int stringPalin() {
    // create a string of length n
    char string[100];
    printf("Enter a string: ");
    scanf("%s", &string);
    // get string length
    int stringLen = strlen(string);
    // add null character at the end of string
    string[stringLen+1] = '\0';
    // declare a flag
    int i, isPal = 1;
    for (i = 0; i < stringLen/2; i++) {
        // check each character one from left one from right
        if (string[i] != string[stringLen - 1 - i]) {
            // set flag = 0 for false
            isPal = 0;
            break;
        }
    }
    // if true
    if (isPal) {
        printf("%s is a palindromic string", string);
    } else {
        printf("%s is not palindromic string", string);
    }
    return 0;
}