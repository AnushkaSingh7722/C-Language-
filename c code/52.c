#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    printf("Principal: ");
    scanf("%f", &p);
    printf("Rate: ");
    scanf("%f", &r);
    printf("Time: ");
    scanf("%f", &t);

    float A = p * pow((1 + r / 100), t);
    float CI = A - p;
    printf("Value of A: %.2f\n", A);
    printf("Compound Interest: %.2f\n", CI);
    return 0;
}