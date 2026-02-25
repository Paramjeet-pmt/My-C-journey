#include <stdio.h>

void getPrice(int itemNumber) {
    float price;
    char choice;

    printf("Enter the price of item %d: ", itemNumber);
    scanf("%f", &price);

    float finalPrice = price + (0.18 * price);
    printf("Final price for item %d is: %.2f\n", itemNumber, finalPrice);

    printf("Do you want to enter another item? (y/n): ");
    scanf(" %c", &choice);  // space before %c to consume leftover newline

    if (choice == 'y' || choice == 'Y') {
        getPrice(itemNumber + 1);  // recursive call with next item number
    }
}

int main() {
    getPrice(1);  // start with item 1
    return 0;
}
