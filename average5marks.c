#include<stdio.h>
void main(){
    int i,n;
    float a[10],sum=0,avg;
    printf("enter the marks of 5 std :\n");
    for(i=0;i<5;i++){
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("\nAverage of marks: %f",avg);
}