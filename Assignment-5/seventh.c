#include <stdio.h>

float Area(int radius) {
    return 3.14 * radius * radius; 
}

float Circumference(int radius) {
    return 2 * 3.14 * radius; 
}

int main() {
    int rad; 
    float area, circ; 

    printf("Enter the radius of the circle: ");
    scanf("%d", &rad);

    area = Area(rad);
    circ = Circumference(rad);

    printf("Area of the circle: %f\n", area);
    printf("Circumference of the circle: %f\n", circ);

    return 0;
}

// Enter the radius of the circle: 5
// Area of the circle: 78.5
// Circumference of the circle: 31.4
