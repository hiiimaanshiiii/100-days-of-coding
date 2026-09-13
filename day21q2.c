#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Find sum of all proper divisors (excluding the number itself)
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    // Compare sum of divisors with the original number
    if (sum == num && num != 0) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }    
    return 0;
}
