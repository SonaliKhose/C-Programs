//Write a C program print total number of days in month using switch case.

#include<stdio.h>
int main(){
    int num;
    printf("\nEnter a Number of month:");
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("\n Its January with 31 days");
            break;
        case 2:
            printf("\n Its February with 28 or 29 days");
            break;
        case 3:
            printf("\n Its March with 31 days");
            break;
        case 4:
            printf("\n Its April with 30 days");
            break;
        case 5:
            printf("\n Its May with 31 days");
            break;
        case 6:
            printf("\n Its June with 30 days");
            break;
        case 7:
            printf("\n Its July with 31 days");
            break;
        case 8:
            printf("\n Its August with 31 days");
            break;
        case 9:
            printf("\n Iys Septmber with 30 days");
            break;
        case 10:
            printf("\n Its October with 31 days");
            break;
        case 11:
            printf("\n Its November with 30 days");
            break;
        case 12:
            printf("\n Its December with 31 days");
            break;
        default:
            printf("\n Invalid case");

    
    }
return 0;

}

// Output:
// Enter a Number of month:10

//  Its October with 31 days
