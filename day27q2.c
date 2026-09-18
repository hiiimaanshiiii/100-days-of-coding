#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Upper half: spaces (n-1)...0, stars 1,3,5,...,(2n-1)
    for (int i = 1; i <= n; i++) {
        int spaces = n - i;
        int stars = 2 * i - 1;

        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }

    // Lower half: spaces 1...(n-1), stars (2n-3)...1
    for (int i = n - 1; i >= 1; i--) {
        int spaces = n - i;
        int stars = 2 * i - 1;

        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }

    return 0;
}
