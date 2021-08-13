
#include <stdio.h>
int main() {
   int i,n;
   printf("\nEnter any number");
   scanf("%d",&n);
   
   
   for(i=2;i<n;i++)
   {
       if(n%i==0){
           printf("\n%d is NOT a PRIME",n);
           break;
       }
       
   }
    if(n==i)
    printf("\n%d is a PRIME",n);
       
    return 0;
}