#include<stdio.h>
void main(){
	double a,b,c;
	printf("\nenter the three no :\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	if(a==b && b==c)
		printf("\nAll three nos are equal:%lf",a);
	
	else
		printf("\nAll three nos are not equal:%lf %lf %lf",a,b,c);
}
