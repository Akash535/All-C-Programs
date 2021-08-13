#include<stdio.h>
void main(){
    int a[100],b[100],n,i;
    printf("enter the no of array:\n");
    scanf("%d",&n);
    printf("enter no :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array A is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    
    for(i=0;i<n;i++){
       b[i]=a[i];
    }
    
    printf("\nArray B is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
}