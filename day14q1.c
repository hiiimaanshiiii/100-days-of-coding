#include <stdio.h>

int main() {
    int n, sum = 0, num = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += num;
        num += 2;
    }

    printf("%d", sum);

    return 0;
}
