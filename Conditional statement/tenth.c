// Write a C program to create a food menu along with prices and allow user to choose
// from the menu at the end print total bill of user.

#include <stdio.h>

int main() {
    int ch, quantity;
    float Bill = 0;

    printf("Welcome to the Food Menu!\n");
    printf("1. Burger - 200\n");
    printf("2. Pizza - 100\n");
    printf("3. Pasta - 150\n");
    printf("4. Salad - 70\n");
    printf("5. Soda - 50\n");

  
    printf("\nEnter the item number you want to order (1-5, 0 to finish): ");
    scanf("%d", &ch);

    while (ch != 0) {
        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        switch (ch) {
            case 1:
                Bill += 200 * quantity;
                printf("You ordered %d Burger(s)\n", quantity);
                break;
            case 2:
                Bill += 100 * quantity;
                printf("You ordered %d Pizza(s)\n", quantity);
                break;
            case 3:
                Bill += 150 * quantity;
                printf("You ordered %d Pasta(s)\n", quantity);
                break;
            case 4:
                Bill += 70 * quantity;
                printf("You ordered %d Salad(s)\n", quantity);
                break;
            case 5:
                Bill += 50 * quantity;
                printf("You ordered %d Soda(s)\n", quantity);
                break;
            default:
                printf("Invalid choice!\n");
        }

        printf("\nEnter the item number you want to order (1-5, 0 to finish): ");
        scanf("%d", &ch);
    }

    printf("\nYour total bill is: %.2f\n", Bill);

    return 0;
}

// Output:
// Welcome to the Food Menu!
// 1. Burger - 200
// 2. Pizza - 100
// 3. Pasta - 150
// 4. Salad - 70
// 5. Soda - 50

// Enter the item number you want to order (1-5, 0 to finish): 2
// Enter the quantity: 3
// You ordered 3 Pizza(s)

// Enter the item number you want to order (1-5, 0 to finish): 1
// Enter the quantity: 1
// You ordered 1 Burger(s)

// Enter the item number you want to order (1-5, 0 to finish): 0

// Your total bill is: 500.00
