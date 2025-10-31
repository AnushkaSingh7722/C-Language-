#include <Stdio.h>
#include <Stdlib.h >
int main(){
    int *ptr = (int*) malloc (3* sizeof (int));
    if (ptr == NULL){
        printf("Memory allocation failed using malloc\n");
        return 1;  
    } 
    for (int i = 0; i< 3; i++ ){
        ptr[i] = i + 1;
    }
    int *temp_ptr = (int*) realloc (ptr , 5 * sizeof(int));
    if (temp_ptr == NULL){
        printf("Memory reallocation failed using realloc\n");
        free(ptr);
        return 1;  
    }
    ptr = temp_ptr;

    ptr[3] = 4;
    ptr[4] = 5;
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
        printf("\n ");
    free(ptr);
    return 0;
}