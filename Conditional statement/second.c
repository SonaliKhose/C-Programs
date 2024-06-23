//Write a C program to take input of 3 numbers from user and find largest of three numbers;

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("\n Enter first Number:");
    scanf("%d",&num1);
    printf("\n Enter Second Number:");
    scanf("%d",&num2);
    printf("\n Enter Third Number:");
    scanf("%d",&num3);

    if(num1>num2&&num1>num3)
    printf("\n %d is Largest...",num1);
    else if(num2>num1&&num2>num3)
    printf("\n %d is Largest....",num2);
    else
    printf("\n %d is Largest...",num3);
}

//  Output:

//  Enter first Number:6

//  Enter Second Number:8

//  Enter Third Number:1

//  8 is Largest....