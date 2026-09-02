#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    scanf("%f %f %f", &principal, &rate, &time);

    float simpleInterest = (principal * rate * time) / 100;
    float compoundInterest = principal * (pow((1 + rate / 100), time) - 1);

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}
