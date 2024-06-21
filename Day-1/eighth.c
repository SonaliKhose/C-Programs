//Write a C program to calculate perimeter and area of rectangle. Take length and
//width as input from user

#include<stdio.h>
int main(){
int len, width;
int area,per;

printf("\nEnter Length of Rectangle:");
scanf("%d",&len);
printf("\nEnter width of rectangle:");
scanf("%d",&width);

area=len*width;
per=2*(len+width);

printf("\n Area of Rectangle is:%d",area);
printf("\nPerimeter of Rectangle is:%d",per);

return 0;
}