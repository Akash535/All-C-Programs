#include<stdio.h>
void main()
{
	double area,peri,l,w;
	printf("\nEnter the length & width of reactangle:\n");
	scanf("%lf%lf",&l,&w);
	area=l*w; peri=2*(l+w);
	printf("\nArea=%lf \nPerimeter=%lf\n",area,peri);
}
