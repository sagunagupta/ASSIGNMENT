#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    do {
        // Get user input for operator
        printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        // Check for exit condition
        if (operator == 'q' || operator == 'Q') {
            printf("Exiting the calculator.\n");
            break;
        }

        // Get user input for operands
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        // Perform calculation based on operator
        if (operator == '+') {
            result = num1 + num2;
        } else if (operator == '-') {
            result = num1 - num2;
        } else if (operator == '*') {
            result = num1 * num2;
        } else if (operator == '/') {
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                continue;  // Skip to the next iteration
            }
        } else {
            printf("Invalid operator. Please enter a valid operator.\n");
            continue;  // Skip to the next iteration
        }

        // Display the result
        printf("Result: %lf\n", result);

    } while (1);  // Infinite loop until the user chooses to exit

    return 0;
}