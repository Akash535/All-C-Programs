#include<stdio.h>
void main(){
    int a=12;

    printf("\na = %0x\n",a); // Hexa small
    printf("a = %0X\n",a);  //Hexa capital
    printf("a = %u\n",a);   //Unsigned
    printf("a = %o\n",a);   //Octal

    printf("\na = %d\n",a);
    printf("size of int = %d\n",sizeof(int));
    printf("size of a = %d\n",sizeof(a));
    printf("size of float = %d\n",sizeof(float));
    printf("size of char = %d\n",sizeof(char));
    printf("size of double = %d\n",sizeof(double));
    printf("size of double = %d\n",sizeof(long double));
}