//Write a function in C to calculate sum of digits.

#include <stdio.h>

int DigitSum(int number) {
    int sum = 0;
   
    while (number != 0) {
        sum += number % 10;  
        number /= 10;        
    }
    
    return sum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = DigitSum(num);

    printf("Sum of digits of %d is %d\n", num, sum);

    return 0;
}


// Enter a number: 1234
// Sum of digits of 12345 is 10
