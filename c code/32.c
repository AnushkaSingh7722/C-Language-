#include <stdio.h>
int main()
{
    int i ;
    for (i = 0;i <10;i++)
    {
        if (i = 5 ){
            printf("\n We are using goto statment when i = 5 ");
            goto HAI;


        }
        printf("%d",i);

    }
    HAI:printf("\n now we are inside label name " "hai\"\n");
}