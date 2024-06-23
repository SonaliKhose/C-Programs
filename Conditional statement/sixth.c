// Write a C program that checks whether age and height meet the eligibility criteria. If
// the age is 18 or above and the height is 160 or above, the person is eligible for ride.

#include<stdio.h>
int main(){
    int age,height;
    printf("\nEnter age:");
    scanf("%d",&age);
    printf("\nEnter Height:");
    scanf("%d",&height);

    if(age>=18&&height>=160)
    printf("\n You are eligible for a ride!");

    else
     printf("\n You are not eligible for a ride!");

}
// output-1

// Enter age:18

// Enter Height:150

//  You are not eligible for a ride!

//  output-2

//  Enter age:20

// Enter Height:160

//  You are eligible for a ride!