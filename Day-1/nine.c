//Write a C program to calculate circumference and area of circle. Take radius as input
//from user.

#include<stdio.h>
int main(){
    float radius,circ,area;

    printf("\nEnter radius of circle:");
    scanf("%f",&radius);

    circ=2*3.14*radius;
    area=3.14*(radius*radius);

    printf("\n Circumference of Circle is:%f",circ);
    printf("\n Area of Circle is:%f",area);

    return 0;

}