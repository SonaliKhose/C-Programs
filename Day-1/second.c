//Write a C program to print your name, address, date of birth and qualification.

#include<stdio.h>
int main(){
    char name[20];
    char add[50];
    char birthDate[20];

    printf("\n Enter your name: ");
    scanf("%s",&name);
    printf("\n Enter your Address: ");
    scanf("%s",&add);
    printf("\n Enter your Date of Birth: ");
    scanf("%s",&birthDate);

printf("Your Details are as below:");
    printf("\n Name:%s", name);
    printf("\n Adreess:%s", add);
    printf("\n Birth Date:%s", birthDate);

    return 0;
}