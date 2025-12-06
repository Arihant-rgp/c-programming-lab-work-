#include <stdio.h>

int main() {
    int c, x, y, result;

    // Input two numbers
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);

    // Display menu
    printf("MENU:\n1. ADD\n2. SUBTRACT\n3. DIVIDE\n4. MULTIPLY\n");
    printf("Enter your choice of operation (1-4): ");
    scanf("%d", &c);

    // Perform operation based on choice
    switch (c) {
        case 1:
            result = x + y;
            printf("Sum = %d\n", result);
            break;
        case 2:
            result = x - y;
            printf("Difference = %d\n", result);
            break;
        case 3:
            if (y != 0) {
                result = x / y;
                printf("Division = %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 4:
            result = x * y;
            printf("Multiplication = %d\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

