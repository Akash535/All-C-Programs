#include<stdio.h>


// a) Function without parameters without return value.
void fun(){
    double c;
    double r,h;
    printf("enter the redius and height of circle:\n");
    scanf("%lf%lf",&r,&h);
    c=3.14*r*r*h;
    printf("volume of cylinder :%lf\n",c);
}
void main(){
    fun();
}



// b) Function with parameter without return value.
// void fun(double r,double h){
//     double c;
//     c=3.14*r*r*h;
//     printf("volume of cylinder :%lf\n",c);
// }
// void main(){
//     double r,h;
//     printf("enter the redius and height of circle:\n");
//     scanf("%lf%lf",&r,&h);
//     fun(r,h);
// }



// // c) Function without parameter with return value.
// int fun(){
//     double c;
//     double r,h;
//     printf("enter the redius and height of circle:\n");
//     scanf("%lf%lf",&r,&h);
//     c=3.14*r*r*h;
//     return (c);
// }
// void main(){
//     double vol;
//     vol=fun();
//     printf("volume of cylinder :%lf",vol);

// }



// d) Function with parameters with return value.
// int fun(double r,double h){
//     return (3.14*r*r*h);
// }
// void main(){
//     double r,h,vol;
//     printf("enter the redius and height of circle:\n");
//     scanf("%f%f",&r,&h);
//     vol=fun(r,h);
//     printf("\n volume of cylinder:%lf",vol);
// }
