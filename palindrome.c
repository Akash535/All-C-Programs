#include<stdio.h>
void main(){
    int n,r,sum=0,t;
    printf("enter the no :\n");
    scanf("%d",&n);
    t=n;
    while (n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==t)
        printf("%d is palindrome.\n",t);
    else
        printf("%d is not palindrome.\n",t);
    
}