#include <stdio.h>
#include <conio.h>
void fun(int arr[]){
    int i ;
    for(i=0; i<5; i++)
        arr[i] = arr[i]+10;
}
void main()
{
    int arr[5],i;
    clrscr();
    printf("\n Enter the array elements:");

    for (i = 0 ; i<5 ;i++)
    printf("\nafter function call a [%d]:%d",i, arr[i]);
    
    getch();

    
}