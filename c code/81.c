// wap transverse an arary using pointer
#include <stdio.h>
int main(){
    int a[2][3],i,j;
    printf("Enter the elements of the array : \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }  
    printf("The elements of the array are : \n");
    for(i=0;i<2;i++){   
        for(j=0;j<3;j++){
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
}