//Write a C program to accept a number and calculate sum of digits.
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

 
    printf("\nEnter a number: ");
    scanf("%d", &num);

  
    while (num != 0) {
        digit = num % 10; 
         sum += digit;     
        num /= 10;        
    }

  
    printf("\nSum of digits: %d", sum);

    return 0;
}

// Output:
// Enter a number: 765

// Sum of digits: 18
