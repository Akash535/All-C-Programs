#include<stdio.h>
#include<string.h>
typedef struct std
{
    int id;
    char ch[10];
    float f;
    double d;
}s1,s2,s3;

void main(){
    s1 s;
    s.id=10;
    printf("s1 s=%d\n",s.id);
    s2 s4;
    s4.f=20;
    printf("s2 s4=%f\n",s4.f);
    s3 s5;
    strcpy(s5.ch,"AKASH SHINGADE");
    printf("s3 s5=%s\n",s5.ch);
    printf("Size of typedef struct is:%d",sizeof(s));
    
}