//  a program that will:
// a. Initialise an integer variable called “number” to 86 decimal.
// b. Using printf, output the value of number
// i. as a character
// ii. as a decimal number
// iii. as a octal number
// iv. as a hex number

#include<stdio.h>
int main(){
    int num=86;

    printf("\n Number as a character:%c", num);
    printf("\n Number as a Decimal:%d", num);
    printf("\n Number as a Octal:%o", num);
    printf("\n Number as a Hexadecimal:%x", num);
}