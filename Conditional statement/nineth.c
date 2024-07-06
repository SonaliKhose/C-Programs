// Write a C program to take two integers from user and a char (+, -, *, /) and perform
// operation according to char input using switch case.

#include <stdio.h>
int main(){
int num1,num2;
char oper;
int ans;

printf("\n Enter First Number:");
scanf("%d",&num1);

printf("\n Enter Operator for a operation on given Numbers('+','-','*','/'):");
scanf(" %c",&oper);

printf("\n Enter Second Number:");
scanf("%d",&num1);



switch(oper){
    case '+':
        ans=num1+num2;
        printf(" Result is:%d",ans);
        break;
     case '-':
        ans=num1-num2;
        printf(" Result is:%d",ans);
        break;
     case '*':
        ans=num1*num2;
        printf("  Result is:%d",ans);
        break;
     case '/':
        ans=num1/num2;
        printf("  Result is:%d",ans);
        break;
    default:
        printf("Invalid Operator...! Please try again.");

}
return 0;
}


//Unable to get correct output
// output:

// Enter First Number:2

//  Enter Second Number:2

//  Enter Operator for a operation on given Numbers('+','-','*','/'):+

//  Result is:2490370