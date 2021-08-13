#include<stdio.h>
#include<string.h>

int conc(char a[],char b[]){
    int i,j;
    i=strlen(a);
    for(j=0;b[j]!='\0';i++,j++)
        a[i]=b[j];
    a[i]='\0';
}
int main(){
    char a[10],b[10];
    printf("\nenter the 1st string:\n");
    gets(a);
    printf("\nenter the 2nd string:\n");
    gets(b);
    conc(a,b);
    printf("\nConcatenate String is %s.",a);
    return 0;

}