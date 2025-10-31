;

#include<stdio.h>
int main(){
    int value = 3;
    switch (value){
        case 1 :
        printf("value is 1 \n");
        break ;
        case 2 :
        printf("value  is 2 \n");
        case 3 :
        printf("value is 3 \n");
        case 4 :
        printf("value is 4 \n:");
        break;
        default:
        printf("value is other than 1,2,3,4, \n");
        
    }
    return 0 ;
}