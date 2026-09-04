#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, sum = 0, digits = 0, temp;
    scanf("%d", &n);

    original = n;

    // Count number of digits
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to power of 'digits'
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
