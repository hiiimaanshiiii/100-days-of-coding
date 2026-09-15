#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    // First term is 1
    if (n >= 1) {
        sum = 1.0;
    }
    
    // Remaining terms follow pattern (2k-1)/(2k) for k = 2, 3, 4...
    for (int k = 2; k <= n; k++) {
        float numerator = 2 * k - 1;
        float denominator = 2 * k;
        sum += numerator / denominator;
    }
    
    printf("Approximate sum: %.1f\n", sum);
    
    return 0;
}
