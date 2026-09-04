#include <stdio.h>

int main() {
    int n, binary[32], count = 0;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        binary[count] = n % 2;
        n /= 2;
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}
