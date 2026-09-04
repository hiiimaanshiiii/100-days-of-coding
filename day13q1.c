#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    scanf("%f %f %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.0f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.0f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.0f", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.0f", result);
            } else {
                printf("Error: Division by zero");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("%d", (int)num1 % (int)num2);
            } else {
                printf("Error: Division by zero");
            }
            break;
        default:
            printf("Invalid Operator");
    }

    return 0;
}
