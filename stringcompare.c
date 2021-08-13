#include<stdio.h>
#include<string.h>

void main(){
    char a[10],b[10];
    printf("\nenter the 1st string:\n");
    gets(a);
    printf("\nenter the 2nd string:\n");
    gets(b);

    if(strcmp(a,b)==0)
        printf("String is Equal: %s  and  %s\n",a,b );
    else
        printf("String is not Equal: %s  and  %s\n",a,b );
}