#include <stdio.h>

int main() {
    char ch;
    int num;

    printf("Enter a character (+, p, -, n) and an integer: ");
    // Read the character and the integer
    if (scanf(" %c %d", &ch, &num) != 2) {
        return 1;
    }

    // Condition validation using only if/else
    if ((ch == '+' || ch == 'p') && num > 0) {
        printf("Positive\n");
    } 
    else if ((ch == '-' || ch == 'n') && num < 0) {
        printf("Negative\n");
    } 
    else {
        printf("Invalid\n");
    }

    return 0;
}
