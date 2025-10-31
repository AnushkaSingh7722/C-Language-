#include<stdio.h>
int main(){
    // This program finds the largest of three numbers using nested if-else
    int a,b,c;
    printf("Enter the numbers A :");
    scanf("%d",&a);
    printf("Enter the numbers B :");
    scanf("%d",&b);
    printf("Enter the numbers C :");
    scanf("%d",&c);
    if(a>=b){
        if(a>=c){
            printf("A is the largest number");
        }
        else{
            printf("C is the largest number");
        }
    }
    else{
        if(b>=c){
            printf("B is the largest number");
        }
        else{
            printf("C is the largest number");
        }
    }
    return 0 ;
}