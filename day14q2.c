#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int first = 1;
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld (", product);

    for (int i = 2; i <= n; i += 2) {
        if (i != 2)
            printf(" * ");
        printf("%d", i);
    }

    printf(")");

    return 0;
}
