#include<stdio.h>
#include<string.h>
struct student{
    int id ;
    char name [30];
    float percentage;

};
int main(){
    int i ;
    struct student record[2];
    for(i=0; i<2; i++){
        printf("Enter details of student %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &record[i].id);
        printf("Name: ");
        scanf("%s", record[i].name);
        printf("Percentage: ");
        scanf("%f", &record[i].percentage);
    }
    for (i = 0 ;i<3 ; i++){
        printf("\nDetails of student %d:\n", i+1);
        printf("ID: %d\n", record[i].id);
        printf("Name: %s\n", record[i].name);
        printf("Percentage: %.2f\n", record[i].percentage);
    }
    return 0;
    
}