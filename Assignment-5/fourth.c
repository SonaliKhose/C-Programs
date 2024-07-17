//Write a function to calculate Fibonacci series of given number of terms. Use
//recursion.

#include <stdio.h>

void fibonacci(int n, int a, int b) {
    static int count = 0;

    if (count == 0) {
        printf("%d ", a); 
    }
    if (count <= n) {
        if (count > 0) {
            printf("%d ", b); 
        }
        count++;
        if (count <= n) {
            fibonacci(n, b, a + b); 
        }
    }
}

int main() {
    int n;

    printf("Enter the number of terms in  series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    fibonacci(n - 1, 0, 1); 
    return 0;
}

// Output:
// Enter the number of terms in series: 7
// Fibonacci Series: 0 1 1 2 3 5 8
