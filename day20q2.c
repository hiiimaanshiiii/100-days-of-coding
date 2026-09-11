#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);

    printf("1's Complement: ");
    for (int i = 0; i < len; i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid binary digit found: %c\n", binary[i]);
            return 1;
        }
    }
    printf("\n");

    return 0;
}
