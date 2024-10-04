// calculator.c

#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[20];
    double num1, num2, result;
    char operation;

    printf("Simple Calculator\n");
    printf("Type 'q' to quit.\n\n");

    while (1) {
        printf("Enter the first number: ");
        if (scanf("%s", input) != 1) break;
        if (input[0] == 'q') break;
        num1 = atof(input);

        printf("Enter the second number: ");
        if (scanf("%s", input) != 1) break;
        if (input[0] == 'q') break;
        num2 = atof(input);

        printf("Choose an operation (+, -, *, /): ");
        if (scanf(" %c", &operation) != 1) break;
        if (operation == 'q') break;

        switch (operation) {
            case '+':
                result = num1 + num2;
                printf("Result: %lf\n\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %lf\n\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %lf\n\n", result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Cannot divide by zero!\n\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %lf\n\n", result);
                }
                break;
            default:
                printf("Invalid operation!\n\n");
                break;
        }

        // Clear the input buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
    }

    printf("Goodbye!\n");
    return 0;
}

