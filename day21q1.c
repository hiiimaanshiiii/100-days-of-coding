#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, numDigits;
    int temp, result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    
    // Handle negative numbers
    int isNegative = 0;
    if (temp < 0) {
        isNegative = 1;
        temp = -temp;
    }
    
    // Find number of digits
    numDigits = (int)log10(temp) + 1;
    
    // Get the last digit
    lastDigit = temp % 10;
    
    // Get the first digit
    firstDigit = temp / (int)pow(10, numDigits - 1);
    
    // Remove first digit and last digit from the middle part
    int middle = (temp % (int)pow(10, numDigits - 1)) / 10;
    
    // Reconstruct the number: lastDigit + middle + firstDigit
    result = lastDigit * (int)pow(10, numDigits - 1);
    result = result + middle * 10;
    result = result + firstDigit;
    
    if (isNegative) {
        result = -result;
    }
    
    printf("Output: %d\n", result);
    
    return 0;
}
