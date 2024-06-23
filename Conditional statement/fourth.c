// Write a C program to take year as a input from user and check whether the year is
// leap year of not

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

   
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

// Output-1
// Enter a year: 2024
// 2024 is a leap year.

// Output-2
// Enter a year: 2025
// 2025 is not a leap year.