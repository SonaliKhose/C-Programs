// Write a C program to take input of number from user and check whether the number
// is even or odd. (Logic: Divide number by 2 and if remainder is 0 number is even)
// Try to use ternary operator for this (Optional)

#include<stdio.h>
int main(){
    int num;
    printf("\n Enter a Number:");
    scanf("%d",&num);

   printf(num%2==0 ?"Number is Even\n":"Number is Odd\n");

return 0;
}

// Output
//  Enter a Number:5
// Number is Odd