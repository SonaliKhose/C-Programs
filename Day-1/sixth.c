//Write a C program to swap two integers

#include<stdio.h>
int main(){
 int a,b;
 int temp;
 printf("\nEnter first number:");
 scanf("%d",&a);
 printf("\nEnter Second number:");
 scanf("%d",&b);

 printf("\nNumbers before Swapping:%d %d",a,b);

 temp=a;
 a=b;
 b=temp;

 printf("\nNumbers after swapping:%d %d",a,b);
 return 0;
 
}