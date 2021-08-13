#include<stdio.h>
#include<string.h>
void fun(int id ,int sal,char name[]){
    printf("Name =%s\tId =%d\tsalary =%d",name,id,sal);
}
struct employees
{
    int id,sal;
    char name[100];
    //fun(id,sal,name);
};

void main(){
    struct employees emp;
    emp.id=10;
    emp.sal=25000;
    strcpy(emp.name,"Akash");
    fun(emp.id,emp.sal,emp.name);
}