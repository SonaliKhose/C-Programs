//Write a C program to print ASCII value of character

#include<stdio.h>
int main(){

    char character;
    printf("\nEnter Chracter:");
    scanf("%c",&character);

    printf("\n ASCII value of character '%c' is: %d",character,(int)character);
}