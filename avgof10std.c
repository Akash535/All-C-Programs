#include<stdio.h>
void main(){
    int a[10],i,avg=0;
    printf("enter the marks of 10 std: \n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        avg=avg+a[i];
    }
    printf("avg of marks 10 std :%d",avg/10);
}