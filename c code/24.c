#include<stdio.h>
int main(){
    int i ;
    for (i = 0 ;i < 10 ; i ++);
    {
        if (i == 5)
        {
            printf("\nWe are using goto statement when i = 5");
           
        }
        printf("%d ", i);
    }

}