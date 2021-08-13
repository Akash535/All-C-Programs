#include<stdio.h>
void main(){
    int n1,n2,*a,*b,sum=0;
    printf("enter the two no :\n");
    scanf("%d%d",&n1,&n2);
    a=&n1;b=&n2;

    //sum=n1+n2;
    sum=*a + *b;
    printf("Addition is :%d\n",sum);
}