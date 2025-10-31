#include<stdio.h>
union job{
    char name[50];
    float salary;
    int worker_no;

}u;
int main(){
    printf("Enter name:\n");
    scanf("%s", u.name);
    printf("Enter salary :\n");
    scanf("%f",&u.salary);
    printf("Displaying\nName :%s\n",u.name);
    printf("Salary :%f\n", u.salary);
    return 0 ;
}