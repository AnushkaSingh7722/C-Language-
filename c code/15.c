#include<stdio.h>
int main(){
    int test ;
    printf("Enter the integer :");
    scanf("%d", &test);
    if(test > 0){
        printf("The number is positive.\n");
    } else if(test < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}