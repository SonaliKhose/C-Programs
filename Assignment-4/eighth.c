//Write a C program to check if given number is a palindrome or not.

#include <stdio.h>

int main() {
    int num, MNum, RNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    MNum = num; 
    while (num != 0) {
        remainder = num % 10;
        RNum = RNum * 10 + remainder;
        num /= 10;
    }

    if (MNum == RNum) {
        printf("%d is a palindrome.\n", MNum);
    } else {
        printf("%d is not a palindrome.\n", MNum);
    }

    return 0;
}

// Output:
// Enter a number: 515
// 515 is a palindrome.
