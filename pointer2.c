#include<stdio.h>
void main()
{
    int a=100,*ptr;
    ptr=&a;
    printf("address of a=%u\n",&a);
    //printf("address of ptr=%u\n",ptr);

    printf("address of ptr=%u\n",ptr);
    //ptr+2;
    printf("value of ptr=%d\n",*ptr);
    *ptr=*ptr+2;
    printf("value of ptr=%d\n",*ptr);
    printf("address of ptr=%u\n",ptr);
}