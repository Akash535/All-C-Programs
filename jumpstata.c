#include<stdio.h>
void main(){
    int i;
    for(i=1;i<=5;i++){
        
            if(i==3)
                continue;
            else{
                printf("%d\n",i);
                
            }
    }
    printf("\n");
    for(int j=5;j>=1;j--)
            if(j==3)
                continue;
            else
                printf("%d\n",j);
                
            
}