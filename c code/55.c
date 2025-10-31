#include<Stdio.h>
int main(){
    // This program swaps two numbers without using a temporary variable
    int a,b;
    printf("Enter the numbers A :");
    scanf("%d",&a);
    printf("Enter the numbers B :");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping : a = %d, b = %d",a,b);
    return 0 ;

}