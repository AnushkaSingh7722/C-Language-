#include<stdio.h>
 void printhello() ;
void printgoodbye();

 int main (){
    printhello();
    printgoodbye();

    return 0;
 }

 void printhello() {
    printf("Hello from printhello function!\n");
 }
 
 void printgoodbye() {
    printf("Goodbye from goodbye function!\n");
 }