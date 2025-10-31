//convert kilometer into meter .
#include <stdio.h>
int main() {
    float kilometer, meter;
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometer);
    
    // Convert kilometers to meters
    meter = kilometer * 1000;
    
    printf("Distance in meters: %.2f\n", meter);
    return 0;
}