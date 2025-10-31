#include<stdio.h>
int main(){
    int a , b , temp ;

    printf("Enter the numbers A :");
    scanf("%d",&a); 
    printf("Enter the numbers B :");
    scanf("%d",&b);
    temp = a ;
    a = b ;
    b = temp ;
    printf("After swapping : a = %d, b = %d",a,b);
    return 0 ;

}