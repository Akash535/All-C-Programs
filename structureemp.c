#include<stdio.h>
struct employees
{
    char name[100];
    int id;
    double sal;

};

void main(){
    struct employees emp[100];
    int n,i;
    printf("enter the no of employees:\n");
    scanf("%d",&n);
    printf("enter the employees name, id and salary:\n");
    for(i=0;i<n;i++){
        scanf("%s%d%lf",&emp[i].name,&emp[i].id,&emp[i].sal);
    }
    //printf("\nemployees name, id and salary is:\n");
    printf("\n\nName\t ID\t Salary\t\n");
    for(i=0;i<n;i++){
        printf("%s\t %d\t %lf\n",emp[i].name,emp[i].id,emp[i].sal);
    }
}