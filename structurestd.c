#include<stdio.h>
#define char a[10];
struct student
{
    char a[100];
    int id;
    
};

void main(){
    struct student s[10];
    printf("Enter the name and id of 10 students:\n");
    for(int i=0;i<3;i++){
        scanf("%s%d",&s[i].a,&s[i].id);
    }
    printf("Name and Id of 10 students:\n");
    for(int i=0;i<3;i++){
        printf("Name- %s\tid- %d\n",s[i].a,s[i].id);
    }
          
    
    // for(int i=0;i<10;i++){
    //     scanf("%d",&s[i].id);
    // }
    // printf("\nstudents id :  ");
    // for(int i=0;i<10;i++){
    //     printf("%d\t",s[i].id);
    // }
}