// Write a function to drawline() for drawing a given character given number of
// times. Use function to draw following output. In the chart given below,
// character * is printed 35 times using drawline()
// ***********************************
// Characters ASCII
// ***********************************
// A – Z 65 – 90
// a – z 91 – 122
// 0 – 9 48 – 57
// ***********************************

#include <stdio.h>

void drawline(char ch, int t) {
    for (int i = 0; i < t; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
   
    drawline('*', 35);

    printf("\nCharacters ASCII");

    drawline('*', 35);

    printf("\nA - Z   \t65 - 90");
    printf("\na - z   \t97 - 122");
    printf("\n0 - 9   \t48 - 57");

    drawline('*', 35);

    return 0;
}

// Output:
// ***********************************

// Characters ASCII***********************************

// A - Z   	65 - 90
// a - z   	97 - 122
// 0 - 9   	48 - 57***********************************