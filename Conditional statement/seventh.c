//Write a C program to print day of week name using switch case.

#include<stdio.h>
int main(){
    int day;
    printf("\nEnter a day in Number:");
    scanf("%d",&day);
    switch(day){
        case 1:
            printf("\n Day is Monday");
            break;
        case 2:
            printf("\n Day is Tuesday");
            break;
        case 3:
            printf("\n Day is Wednesday");
            break;
        case 4:
            printf("\n Day is Thursday");
            break;
        case 5:
            printf("\n Day is Friday");
            break;
        case 6:
            printf("\n Day is Saturday");
            break;
        case 7:
            printf("\n Day is Sunday");
            break;
        default:
            printf("\n Invalid case");
    }


}

//Output:
// Enter a day in Number:5

//  Day is Friday