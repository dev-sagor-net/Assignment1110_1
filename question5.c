#include <stdio.h>

int main() {
    int choice;
    char grade;

    printf("Welcome to Y Academy Student Counseling System\n");
    printf("Press 1 for Exam Preparation Guidance\n");
    printf("Press 2 for Progress Card Section\n");
    printf("Enter your choice: ");
    
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice) {
        case 1:
            printf("Revise experiments and understand key concepts.\n");
            break;
        case 2:
            printf("Enter your grade (A/B/C/Other): ");
            if (scanf(" %c", &grade) != 1) return 1;

            switch (grade) {
                case 'A':
                case 'a':
                    printf("You're doing great! Keep it up!\n");
                    break;
                case 'B':
                case 'b':
                case 'C':
                case 'c':
                    printf("Focus on practicing your weak topics.\n");
                    break;
                default:
                    printf("Consider scheduling a session with a tutor.\n");
                    break;
            }
            break;
        default:
            printf("Invalid Menu Selection.\n");
            break;
    }

    return 0;
}
