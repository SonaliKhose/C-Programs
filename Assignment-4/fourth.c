//Write a C program to print prime numbers between 1 to 100.
#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("\nPrime numbers between 1 and 100 are:");

    for (num = 2; num <= 100; num++) {
        isPrime = 1; 

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", num);
        }
    }

    return 0;
}

// Output:
// Prime numbers between 1 and 100 are:2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 