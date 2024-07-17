//Write a C program to display n terms Fibonacci series.

#include <stdio.h>

int main() {
    int n, i;
    int num1 = 0, num2 = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci Series: %d, %d", num1, num2);

    for (i = 3; i <= n; ++i) {
        next = num1 + num2;
        printf("  %d", next);
        num1 = num2;
        num2 = next;
    }

    return 0;
}
