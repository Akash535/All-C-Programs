#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    int i,j;
    printf("Enter the string :\n");
    gets(a);
    printf("Enter the substring :\n");
    gets(b);
    for(int k=0;b[k]!='\0';k++);
    for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++){
        if(a[i]==b[j])
            j++;
        else
            j=0;
    }
    if(j>0)
        printf("SubString is present. at position %d",i-j+1);
    else
        printf("SubString is not present.");
}