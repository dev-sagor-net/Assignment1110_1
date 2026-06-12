#include <stdio.h>

int main() {
    int ages[7];
    int youngest, oldest, difference;
    int sum_even = 0;

    printf("Enter the ages of 7 employees:\n");
    // Input ages for 7 employees
    for (int i = 0; i < 7; i++) {
        if (scanf("%d", &ages[i]) != 1) {
            return 1;
        }
    }

    // Initialize extremes with the first entry
    youngest = ages[0];
    oldest = ages[0];

    for (int i = 1; i < 7; i++) {
        if (ages[i] < youngest) {
            youngest = ages[i];
        }
        if (ages[i] > oldest) {
            oldest = ages[i];
        }
    }

    difference = oldest - youngest;

    printf("Youngest: %d\n", youngest);
    printf("Oldest: %d\n", oldest);
    printf("Difference: %d\n", difference);

    // Print all even numbers in the range [youngest, oldest] and calculate sum
    int first = 1;
    for (int i = youngest; i <= oldest; i++) {
        if (i % 2 == 0) {
            if (!first) {
                printf(",");
            }
            printf("%d", i);
            sum_even += i;
            first = 0;
        }
    }
    printf("\nSum: %d\n", sum_even);

    return 0;
}
