//enter the 2d array and compute the sum of those array

#include<stdio.h>

int main(){
    int arr[3][3];
    int i , j ;
    int sum = 0 ;
    for ( i = 0 ; i < 3 ; i++ ){
        for ( j = 0 ; j < 3 ; j++ ){
            printf("Enter the value of arr[%d][%d] : ", i , j);
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    printf("The sum of the array is : %d", sum);
    return 0 ;
}