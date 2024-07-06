// Write a C program to create a food menu along with prices and allow user to choose
// from the menu at the end print total bill of user.
// Menu:
// 1. Starters
//     1. Paneer Chilly ₹120
//     2. Spring Roll ₹100
//     3. Masala Papad ₹60
//     4. Veg Manchow Soup ₹50
// 2. Main Course
//     1. Gujrati Thali ₹150
//     2. Maharashtrian Thali ₹150
//     3. Punjabi Thali ₹150
//     4. South Indian Thali ₹150
// 3. Dessert
//     1. Ice-Cream ₹100
//     2. Gulab Jamun ₹150
//     3. Ras Malai ₹120
//     4. Chocolate Brownie ₹150
// Print the total bill of user at the end

#include <stdio.h>

int main() {
    int ch, subCh;
    int Bill = 0;

    while (1) {
        printf("Menu:\n");
        printf("1. Starters\n");
        printf("   1. Paneer Chilly 120\n");
        printf("   2. Spring Roll 100\n");
        printf("   3. Masala Papad 60\n");
        printf("   4. Veg Manchow Soup 50\n");
        printf("2. Main Course\n");
        printf("   1. Gujrati Thali 150\n");
        printf("   2. Maharashtrian Thali 150\n");
        printf("   3. Punjabi Thali 150\n");
        printf("   4. South Indian Thali 150\n");
        printf("3. Dessert\n");
        printf("   1. Ice-Cream 100\n");
        printf("   2. Gulab Jamun 150\n");
        printf("   3. Ras Malai 120\n");
        printf("   4. Chocolate Brownie 150\n");

        printf("\nEnter the category number (1 for Starters, 2 for Main Course, 3 for Dessert, 0 to finish): ");
        scanf("%d", &ch);

        if (ch == 0) {
            break;
        }

        printf("Enter the item number in the chosen category: ");
        scanf("%d", &subCh);

        switch (ch) {
            case 1: 
                switch (subCh) {
                    case 1:
                        Bill += 120;
                        break;
                    case 2:
                        Bill += 100;
                        break;
                    case 3:
                        Bill += 60;
                        break;
                    case 4:
                        Bill += 50;
                        break;
                    default:
                        printf("Invalid choice.\n");
                }
                break;
            case 2: 
                switch (subCh) {
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                        Bill += 150;
                        break;
                    default:
                        printf("Invalid choice.\n");
                }
                break;
            case 3: 
                switch (subCh) {
                    case 1:
                        Bill += 100;
                        break;
                    case 2:
                    case 4:
                        Bill += 150;
                        break;
                    case 3:
                        Bill += 120;
                        break;
                    default:
                        printf("Invalid choice.\n");
                }
                break;
            default:
                printf("Invalid choice.\n");
        }

        printf("Current total bill: %d\n", Bill);
    }

    printf("\nTotal bill: %d\n", Bill);
    return 0;
}
// output:
// Menu:
// 1. Starters
//    1. Paneer Chilly 120
//    2. Spring Roll 100
//    3. Masala Papad 60
//    4. Veg Manchow Soup 50
// 2. Main Course
//    1. Gujrati Thali 150
//    2. Maharashtrian Thali 150
//    3. Punjabi Thali 150
//    4. South Indian Thali 150
// 3. Dessert
//    1. Ice-Cream 100
//    2. Gulab Jamun 150
//    3. Ras Malai 120
//    4. Chocolate Brownie 150

// Enter the category number (1 for Starters, 2 for Main Course, 3 for Dessert, 0 to finish): 1
// Enter the item number in the chosen category: 3
// Current total bill: 60
// Menu:
// 1. Starters
//    1. Paneer Chilly 120
//    2. Spring Roll 100
//    3. Masala Papad 60
//    4. Veg Manchow Soup 50
// 2. Main Course
//    1. Gujrati Thali 150
//    2. Maharashtrian Thali 150
//    3. Punjabi Thali 150
//    4. South Indian Thali 150
// 3. Dessert
//    1. Ice-Cream 100
//    2. Gulab Jamun 150
//    3. Ras Malai 120
//    4. Chocolate Brownie 150

// Enter the category number (1 for Starters, 2 for Main Course, 3 for Dessert, 0 to finish): 2
// Enter the item number in the chosen category: 4
// Current total bill: 210
// Menu:
// 1. Starters
//    1. Paneer Chilly 120
//    2. Spring Roll 100
//    3. Masala Papad 60
//    4. Veg Manchow Soup 50
// 2. Main Course
//    1. Gujrati Thali 150
//    2. Maharashtrian Thali 150
//    3. Punjabi Thali 150
//    4. South Indian Thali 150
// 3. Dessert
//    1. Ice-Cream 100
//    2. Gulab Jamun 150
//    3. Ras Malai 120
//    4. Chocolate Brownie 150

// Enter the category number (1 for Starters, 2 for Main Course, 3 for Dessert, 0 to finish): 0

// Total bill: 210