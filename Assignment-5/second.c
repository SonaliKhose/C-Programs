#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r) {
    if (r > n) {
        return 0; 
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    int result = combination(n, r);

    printf("%dC%d = %d\n", n, r, result);

    return 0;
}

// Output:
// Enter the value of n: 2
// Enter the value of r: 3
// 2C3 = 0