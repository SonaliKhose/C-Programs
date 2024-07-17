//Write a C program to print following patters:

//1

#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<=5;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

printf("\n");
    for(i=5;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
printf("\n");
    int sp;
    for (i = 0; i < 6; i++) {
        for (sp = 0; sp < 6 - i - 1; sp++) {
            printf(" ");
        }
        
        for (j = 0; j < 2 * i + 1; ++j) {
            printf("*");
        }

        printf("\n");
}
}
// Output:
// *
// **
// ***
// ****
// *****
// ******

// ******
// *****
// ****
// ***
// **
// *

//      *
//     ***
//    *****
//   *******
//  *********
// ***********