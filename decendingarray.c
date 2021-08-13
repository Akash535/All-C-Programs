#include<stdio.h>
void main(){
    int a[100],n,i,j,t;
    printf("enter the no of array:\n");
    scanf("%d",&n);
    printf("enter no :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\ndecending array is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}