#include<stdio.h>
int main(){
    int i ;
    for (i = 0; i< 10;
    i ++ ){
        if (i == 5 || i == 6){
            printf("\ skipping %d from display using "\
                "continue statment \n ",i);
            continue ;
         }
        printf("%d ", i);
    }
}