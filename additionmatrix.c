#include<stdio.h>
void main(){
    int a[10][10],b[10][10],sum[10][10],i,j,max,maxr,maxc;
    printf("enter the element in 3*3 Matrix A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nenter the element in 3*3 Matrix B: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }

    printf("Matrix A is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Matrix B is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            sum[i][j]=a[i][j]+b[i][j];
    }
    printf("Addition of matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",sum[i][j]);  
        }
        printf("\n");
    }
}