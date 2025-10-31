//binomial theorm program
#include<math.h>
#include<stdio.h>

int main() {
    int n, k;
    double result;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Calculate binomial coefficient C(n, k) = n! / (k! * (n - k)!)
    result = tgamma(n + 1) / (tgamma(k + 1) * tgamma(n - k + 1));

    printf("C(%d, %d) = %.0f\n", n, k, result);
    return 0;
}