#include<stdio.h>
// void main(){
//     int i,j,n;
//     printf("enter the no :\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++)
//             printf(" %d",j);
//         printf("\n");
//     }
// }*
                    //  output:    1
                    //             1 2
                    //             1 2 3
                    //             1 2 3 4
                    //             1 2 3 4 5


// void main(){
//     int i,j;
//     char ip,al='A';
//     printf("enter an uppercase char you want to print :\n");
//     scanf("%c",&ip);
//     for(i=1;i<=(ip-'A'+1);i++){
//         for(j=1;j<=i;j++){
//             printf(" %c ",al);           
//         }
//         al++;
//         printf("\n");
//     }
// }
//    Output:      A
//                 B  B
//                 C  C  C
//                 D  D  D  D
//                 E  E  E  E  E


// void main(){
//     int i,j;
//     char ip,al='A';
//     printf("enter an uppercase char you want to print :\n");
//     scanf("%c",&ip);
//     for(i=1;i<(ip-'A'+1);i++){
//         for(j=1;j<=i;j++)
//             printf("%c ",al+j-1);
//         printf("\n");
//     }
// }
    // Output: A
    //         A B
    //         A B C
    //         A B C D
    //         A B C D E


// void main(){
//     int i,j,n;
//     printf("enter the no :\n");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf(" %d",j);
//         }
//         printf("\n");
//     }
// }
//  Output: 1 2 3 4 5
//          1 2 3 4
//          1 2 3
//          1 2
//          1


// void main(){
//     int i,j,m,k;
//     printf("Enter the no :\n");
//     scanf("%d",&m);
   
//     for(i=1;i<=m;++i){
//         //k=0;
//         for(j=1;j<=m-i;j++){
//             printf(" ");
//         }
//         for (k=0;k<2*i-1;k++)
//         {
//            printf("*");
//           // ++k;
//         }
//         printf("\n");
//     }
// }
// Output:     *
//            ***
//           *****
//          *******
//         *********
//        ***********

