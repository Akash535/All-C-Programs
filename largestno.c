#include<stdio.h>
void main(){
	double a,b,c;
	printf("\nenter the three no :\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	if(a==b && b==c)
		printf("\nAll three nos are equal and largest no is %lf",a);
	else if(a>b && a>c){
		printf("\nlargest no is :%lf",a);
		printf("\nAll three nos are not equal:%lf %lf %lf",a,b,c);
	}
	else if(c<b){
		printf("\nlargest no is :%lf",b);
		printf("\nAll three nos are not equal:%lf %lf %lf",a,b,c);
	}
	// else if(a!=b && a==c)
	// 	printf("\nAll three nos are not equal:%lf %lf %lf",a,b,c);
	else{
		printf("\nlargest no is :%lf",c);
		printf("\nAll three nos are not equal:%lf %lf %lf",a,b,c);
	}
}