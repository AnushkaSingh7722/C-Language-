//Given a five digit integer, print the sum of its digits.
#include<stdio.h>
int main(){ 
    int num ;
    int sum = 0 ;
    printf("Enter a five digit number : ");
    scanf("%d", &num);
    while ( num > 0 ){
        sum = sum + num % 10 ;
        num = num / 10 ;
    }
    printf("The sum of the digits is : %d", sum);
    return 0 ;
}