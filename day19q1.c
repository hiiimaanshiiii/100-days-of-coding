#include <stdio.h>

int main() {
    int a, b, num1, num2, temp;
    scanf("%d %d", &a, &b);
    
    num1 = a;
    num2 = b;
    
    // Find HCF first using Euclidean algorithm
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    
    // num1 now holds the HCF
    int lcm = (a * b) / num1;
    
    printf("%d\n", lcm);
    
    return 0;
}
