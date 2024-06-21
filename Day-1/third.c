//Write a C program to accept two numbers and find its sum, difference, product and division.

#include<stdio.h>
int main(){
    int num1,num2;
    printf("\nEnter 2 Numbers:");
    scanf("%d %d",&num1,&num2);

    printf("\nSum is:%d",num1+num2);
    printf("\nDifference is:%d",num1-num2);
    printf("\nProduct is:%d",num1*num2);
    printf("\nDivision is:%d",num1/num2);

    

}