#include <stdio.h>
/*
 * Armstrong Logic
 * integer == pow(int_digit, int_length) + pow(int_digit, int_length) + ... + n-digits == integer if true : armstrong
 * ex: 153 == pow(1, 3) + pow(5, 3) + pow(3, 3) == 153, it's an armstrong number
 * Goal of extraction is to extract till userInput becomes 0
 */
// void printArmNum(int until);
// this checks for three digit armstrong number
int main() {
    int userInput, aSum = 0, unitDigit = 0;
    printf("Please Enter a number to check: ");
    scanf("%d", &userInput);
    // store this for later comparison
    int tempNumInMemory = userInput;
    // start the loop
    while (userInput > 0) {
        // extract unit digits
        unitDigit = userInput % 10;
        // remove this unit digit
        userInput /= 10;
        // calculate armstrong sum
        aSum += unitDigit*unitDigit*unitDigit;
    }
    // compare after loop ends
    if (tempNumInMemory == aSum) {
        // a valid armstrong number
        printf("%d is a valid armstrong number", tempNumInMemory);
    } else {
        // not a valid armstrong number
        printf("%d is not a valid armstrong number", tempNumInMemory);
    }
    return 0;
}

// // print armstrong numbers in range from 1 to ...
// void printArmNum(int until) {
//     int startPoint,endPoint, loopVar = 0, temp = 0, unitDigit = 0, aSum = 0;
//     // get from user the end length until when the loop is required to run
//     printf("Please enter range: ");
//     scanf("%d", &startPoint);
//     scanf("%d", &endPoint);
//
//     for (loopVar = startPoint; loopVar < endPoint; loopVar++) {
//         temp = startPoint;
//         while (temp > 0) {
//             unitDigit = temp % 10;
//             temp /= 10;
//             aSum +=
//         }
//     }
// }