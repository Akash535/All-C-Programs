#include<stdio.h>
void main(){
    int a[10][10],b[10][10],mul[10][10],sum=0,i,k,j;
    printf("Enter the A matrix 3*3 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nenter the B Matrix 3*3 : \n");
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
        for(j=0;j<3;j++){
            
            for(k=0;k<3;k++){
                sum=sum+a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    printf("\nMultiplication of Matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",mul[i][j]);
        printf("\n");
    }
}