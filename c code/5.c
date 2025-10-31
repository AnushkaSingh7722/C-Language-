int main(){
    int a = 22;
    int b = a;
    int c = a = b;

    int oldage = 30;
    int years = 5;
    int newage = oldage + years;
   
    int x = 9;
    int y = 10;
    int z = 20;     
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    printf("oldage: %d, years: %d, newage: %d\n", oldage, years, newage);
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    return 0;   
}
#include <stdio.h>  
