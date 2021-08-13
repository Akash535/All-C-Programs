#include<stdio.h>
void main(){
    int i,n;
    printf("The time taken by worker in hours(enter bet 2h to 5h more):\n");
    scanf("%d",&n);
    if(3>n && n>=2 )
        printf("the worker is highly efficient. \n");
   else if(4>n && n>=3 )
        printf("the worker is improve speed. \n");
   else if(5>n && n>=4 )
        printf("the worker is given training to improve his speed. \n");
   else
        printf("the worker has to leave the company. \n");
}


