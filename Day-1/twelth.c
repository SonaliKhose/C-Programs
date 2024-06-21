//Write a C program to find the quotient and remainder.

#include<stdio.h>
int main(){
    int divisor,dividend,remainder;
    int quotient;
    printf("\n Enter Divisor:");
    scanf("%d",&divisor);

    printf("\n Enter Divedend:");
    scanf("%d",&dividend);

quotient=dividend/divisor;
remainder=dividend%divisor;

    printf("\n Quotient will be:%d",quotient);
    printf("\n Remainder is:%d",remainder);
}