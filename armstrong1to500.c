#include<stdio.h>
void main(){
    int i,a,b,c,t;
    printf("Armstrong no bet 1 to 500 :\n");
    for(i=001;i<=500;i++){
        a=i-((i/10)*10);
        b=(i/10)-((i/100)*10);
        c=(i/100)-((i/1000)*10);
        t=(a*a*a)+(b*b*b)+(c*c*c);
        if(t==i)
            printf("%d ",t);
    }
    printf("\n\n");
}