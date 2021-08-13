#include<stdio.h>
void main(){
    int a[10][10],min,i,j,t,k,l;
    printf("enter the no in 3*3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("original matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    min=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=i;k<3;k++){
                for(l=j+1;l<3;l++){
                    if(a[i][j]>a[k][l]){
                        min=a[i][j];
                        a[i][j]=a[k][l];
                        a[k][l]=min;
                    }
                }
            }
            

        }
    }
    printf("asending matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}