#include<stdio.h>
struct empInfo
{
    char DOB[100];
};

struct employee
{
    
    char name[10];
    int id;
    int sal;
    struct empInfo info;   
};

void main(){
    struct employee emp[100];
    int n,i;
    printf("Enter the no of employees:");
    scanf("%d",&n);
    printf("\nEnter the name,id,salary and DOB of employees:\n");
    for(i=0;i<n;i++){
        scanf("%s%d%d%s",&emp[i].name,&emp[i].id,&emp[i].sal,&emp[i].info.DOB);
    }
    printf("\n\nName\t ID\t Salary\t DOB\t\n");
    for(i=0;i<n;i++){
        printf("%s\t %d\t %d\t %s\t\n",emp[i].name,emp[i].id,emp[i].sal,emp[i].info.DOB);
    }
    
}