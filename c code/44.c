#include<stdio.h>
#define PI 3.1415
int main(){
    float radius ;
    float area;
    printf("Enter radius :");
    scanf("%f" , &radius );
    area = PI*radius*radius;
    printf("Area = %.2f",area);
    return 0;
}