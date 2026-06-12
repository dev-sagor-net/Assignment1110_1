#include <stdio.h>

int main() {
    char choice;
    int quantity;
    double unit_price = 0;
    double base_price, discount = 0, vat, final_payable;
    char food_name[20];

    printf("***** Welcome to Smart Cafeteria *****\n");
    printf("Enter your food choice: ");
    if (scanf(" %c", &choice) != 1) return 1;
    printf("Enter the quantity: ");
    if (scanf("%d", &quantity) != 1) return 1;

    switch (choice) {
        case 'a':
        case 'A':
            unit_price = 150.0;
            sprintf(food_name, "Burger");
            break;
        case 'b':
        case 'B':
            unit_price = 250.0;
            sprintf(food_name, "Pizza");
            break;
        case 'c':
        case 'C':
            unit_price = 200.0;
            sprintf(food_name, "Pasta");
            break;
        default:
            printf("Invalid Selection.\n");
            return 0;
    }

    base_price = unit_price * quantity;

    // Apply 10% discount only on the amount above 500 Taka
    if (base_price > 500.0) {
        discount = (base_price - 500.0) * 0.10;
    }

    // Calculate 6% VAT on the adjusted base bill after discount adjustments
    vat = (base_price - discount) * 0.06;
    final_payable = (base_price - discount) + vat;

    // Displaying matching output format
    printf("\nYour selected food is %s; which price is %.0f takas.\n", food_name, unit_price);
    printf("VAT Amount = %.0f taka\n", vat);
    printf("Discount Amount = %.0f taka\n", discount);
    printf("%d foods total price is %.0f taka\n", quantity, final_payable);
    printf("***** Thank you for being with us*****\n");

    return 0;
}
