#include<stdio.h>
#include<string.h>
union std
{
    int id;
    char ch[20];
    float f;
    double b[20];
};
void main(){
    union std s;
    printf("Size of union is:%d",sizeof(s));
    s.f=220.25;
    printf("\ns.f=%f",s.f);
    strcpy(s.ch,"Akash");
    printf("\ns.ch=%s",s.ch);

}
