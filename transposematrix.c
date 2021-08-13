#include<stdio.h>
void main(){
    int a[10][10],t[10][10],i,j;
    
    printf("enter no of 3*3 matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Array is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            t[j][i]=a[i][j];

    printf("\nTranspose Matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",t[i][j]);
        printf("\n");
    }
}