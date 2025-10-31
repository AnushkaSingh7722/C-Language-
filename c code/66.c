
// #include <stdio.h>
// int main(){


//     int i=1;
//     while(i<=100){
//         if(i%2!=0){
//             printf("%d\n",i);
//         }
//         i++;
//     }
//     return 0;
// }

// write this programm like a beginne rwrote it 
#include <stdio.h>
int main(){
    int i=1;
    while(i<=100){
        if(i%2==0){
            i++;
            continue;
        }
        printf("%d\n",i);
        i++;
    }
    return 0;
}