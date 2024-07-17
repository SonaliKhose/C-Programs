//Write a function to swap two given numbers. Call this function from main().

#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Swapped numbers: \n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    swap(num1, num2);

    return 0;
}


// Enter first number: 5
// Enter second number: 8
// Before swapping:
// First number: 5
// Second number: 8
// Swapped numbers:
// First number: 8
// Second number: 5