//Write a "C" program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>
int main(){
    char letter;
    printf("\nEnter any letter:");
    scanf("%c",&letter);

    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'
    ||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=="U"){
        printf("\nGiven Letter is Vowel...");
    }
    else{
        printf("\nGiven letter is Consonent...");
    }
}

// Output-1:
// Enter any letter:A

// Given Letter is Vowel...

// Output-2:
// Enter any letter:l

// Given letter is Consonent...