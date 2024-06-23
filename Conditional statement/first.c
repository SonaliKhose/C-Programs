//Write a C program to take input of 2 numbers from user and find largest of two numbers;

#include<stdio.h>


int main(){
    int num1,num2;
printf("\nEnter first number:");
scanf("%d",&num1);
printf("\nEnter Second number:");
scanf("%d",&num2);

if(num1>num2)
printf("\n %d  is greater than %d",num1,num2);

else
printf("\n %d is greater than %d",num2,num1);
}

// Output:

// Enter first number:5

// Enter Second number:8

//  8 is greater than 5