#include <stdio.h>

int main() {
    long long num;
    int digit, product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Edge case: number is 0
    if (num == 0) {
        printf("Product of odd digits: 1 (no odd digits, assume 1)\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            foundOdd = 1;
        }
        num /= 10;
    }

    if (foundOdd)
        printf("Product of odd digits: %d\n", product);
    else
        printf("Product of odd digits: 1 (no odd digits, assume 1)\n");

    return 0;
}
