//make a user defined fuction 
#include<stdio.h>
int main (){
    int a , b ;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("The sum of a and b is : %d", sum(a,b));
    return 0 ;
}
int sum(int x , int y){
    return x + y ;
}