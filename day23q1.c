#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    // Pattern: term k = (2k) / (4k - 1) for k = 1, 2, 3, ...
    for (int k = 1; k <= n; k++) {
        float numerator = 2 * k;
        float denominator = 4 * k - 1;
        sum += numerator / denominator;
    }
    
    printf("Approximate sum: %.2f\n", sum);
    
    return 0;
}
