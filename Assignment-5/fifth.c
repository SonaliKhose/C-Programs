// Write a single function to check if a given number is positive or negative as well
// as even/odd. Call this function from main() and print the result in main().

#include <stdio.h>

void checkNum(int num) {
    if (num > 0) {
        printf("%d is positive.\n", num);
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    } else if (num < 0) {
        printf("%d is negative.\n", num);
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    } else {
        printf("Number is zero.\n");
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkNum(number);

    return 0;
}


// Output:
// Enter a number: 7
// 7 is positive.
// 7 is odd.