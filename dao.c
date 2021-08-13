#include<stdio.h>
void main(){
	double a,b,add,sub,mul,div;
	printf("\nEnter the two no:\n");
	scanf("%lf%lf",&a,&b);
	
	add=a+b; sub=a-b; mul=a*b; div=a/b;
	printf("\n Addition:%lf\nSubstraction:%lf\nMultiply:%lf\nDivision:%lf\n",add,sub,mul,div);
}
