#include <stdio.h>
struct student{
    char name[50];
    int roll ;

};
void Display(struct student stu);
int main(){
    struct student s1;
    printf("enter student's name:");
    scanf("%s",&s1.name);
    printf("Enter roll number :");
    scanf("%d",&s1.roll);
    Display(s1);
    return 0;

}
void Display(struct student stu){
    printf("Output\nName : %s",stu.name );
    printf("\nRoll: %d", stu.roll);
}