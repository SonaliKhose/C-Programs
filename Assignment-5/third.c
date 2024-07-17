#include <stdio.h>

int power(int a, int b) {
   
    if (b == 0) {
        return 1;
    }
   
    else if (b < 0) {
        return 1 / power(a, -b);
    }
  
    else {
        return a * power(a, b - 1);
    }
}

int main() {
    int base, result;
    int exp;

    printf("\nEnter the base a: ");
    scanf("%d", &base);
    printf("\nEnter the exponent b: ");
    scanf("%d", &exp);

    result = power(base, exp);

    printf("\nwhen base is %d and exponent is %d = %d", base, exp, result);

    return 0;
}


// Output:
// Enter the base a: 2
// Enter the Exponent b:3
// when base is 2 and exponent is 3 = 8