#include<stdio.h>
void main(){
    int a=10;
    char b='B';
    int* p;
    int **r;
    char* q;
    p=&a;
    q=&b;
    r=&p;

    printf("address of a = %u\n",&a);
    printf("address of b = %u\n",&b);
    printf("address of *p = %u\n",&p);
    printf("address of *q = %u\n",&q);
    printf("address of **r = %u\n\n",&r);
    
    printf("value of a = %d\n",a);
    printf("value of b = %c\n",b);
    printf("value of *p = %d\n",*p);
    printf("value of *q = %c\n",*q);
    printf("value of **r = %d\n",**r);

    printf("p store address of a = %u\n",p);
    printf("q store address of b = %u\n",q);
}