#include <stdio.h>

void printHeader();
void printMenu();
void printResult(double num1, double num2, char operator, double result);
void printError(const char *message);

int main() {
    char operator;
    double num1, num2, result;
    int continueCalc = 1;

    printHeader();

    while (continueCalc) {
        printMenu();

        // Get operator input
        printf("Choose an operation (+, -, *, /): ");
        scanf(" %c", &operator);

        // Get numbers
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);

        // Perform calculation based on the operator
        switch (operator) {
            case '+':
                result = num1 + num2;
                printResult(num1, num2, operator, result);
                break;
            case '-':
                result = num1 - num2;
                printResult(num1, num2, operator, result);
                break;
            case '*':
                result = num1 * num2;
                printResult(num1, num2, operator, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printResult(num1, num2, operator, result);
                } else {
                    printError("Error: Division by zero is not allowed.");
                }
                break;
            default:
                printError("Error: Invalid operator. Please try again.");
                break;
        }

        // Ask if the user wants to perform another calculation
        printf("\nDo you want to perform another calculation? (1 = Yes, 0 = No): ");
        scanf("%d", &continueCalc);
    }

    printf("\nThank you for using the calculator. Goodbye!\n");

    return 0;
}

void printHeader() {
    printf("=========================================\n");
    printf("           Welcome to Calculator         \n");
    printf("=========================================\n\n");
}

void printMenu() {
    printf("Available Operations:\n");
    printf("   +  : Addition\n");
    printf("   -  : Subtraction\n");
    printf("   *  : Multiplication\n");
    printf("   /  : Division\n");
    printf("-----------------------------------------\n");
}

void printResult(double num1, double num2, char operator, double result) {
    printf("\n=========================================\n");
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
    printf("=========================================\n");
}

void printError(const char *message) {
    printf("\n-----------------------------------------\n");
    printf("%s\n", message);
    printf("-----------------------------------------\n");
}
