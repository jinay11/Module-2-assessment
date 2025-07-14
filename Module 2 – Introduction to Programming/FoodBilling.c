#include <stdio.h>

int main() {
    int choice, quantity;
    char more;
    float totalBill = 0;

    // Display welcome message
    printf("**************************************\n");
    printf("     Welcome to C Food Billing System\n");
    printf("**************************************\n");

    do {
        // Display Menu
        printf("\n------- MENU -------\n");
        printf("1. Pizza      - Rs.200\n");
        printf("2. Burger     - Rs.100\n");
        printf("3. Sandwich   - Rs.150\n");
        printf("4. Pasta      - Rs.120\n");
        printf("5. Coffee     - Rs.80\n");
        printf("--------------------\n");

        // Take user's choice
        printf("Enter the item number you want to order: ");
        scanf("%d", &choice);

        // Take quantity
        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        // Calculate bill based on choice using switch-case
        switch(choice) {
            case 1:
                totalBill += 200 * quantity;
                printf("Added %d Pizza(s) to your order.\n", quantity);
                break;
            case 2:
                totalBill += 100 * quantity;
                printf("Added %d Burger(s) to your order.\n", quantity);
                break;
            case 3:
                totalBill += 150 * quantity;
                printf("Added %d Sandwich(es) to your order.\n", quantity);
                break;
            case 4:
                totalBill += 120 * quantity;
                printf("Added %d Pasta(s) to your order.\n", quantity);
                break;
            case 5:
                totalBill += 80 * quantity;
                printf("Added %d Coffee(s) to your order.\n", quantity);
                break;
            default:
                printf("Invalid choice! Please select from the menu.\n");
                break;
        }

        // Ask if the customer wants to order more
        printf("Do you want to order more? (Y/N): ");
        scanf(" %c", &more); // Space before %c to clear buffer

    } while(more == 'Y' || more == 'y'); // Loop continues if user enters 'Y' or 'y'

    // Display final bill
    printf("\n**************************************\n");
    printf("          Final Bill: Rs.%.2f\n", totalBill);
    printf("**************************************\n");

    printf("Thank you for ordering! Visit Again.\n");

    return 0;
}
