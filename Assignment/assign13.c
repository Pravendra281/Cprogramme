#include<stdio.h>
// Q1 Su of N Natural number 
// int main()
// {
// int i,n,sum=0;
// printf("Enter Number of Natural No: ");
// scanf("%d",&n);
// for (i=1;i<=n;i++){
//     sum = sum+i;
// }
//  printf("Sum is %d ",sum);
// printf("\n");
// return 0;
// }
/*sum of N even natural number*/
// Q2 int main()
// {
// int i,n,sum=0;
// printf("Enter Number of Natural No: ");
// scanf("%d",&n);
// for (i=1;i<=n;i++){
//     sum = sum+2*i;
// }
//  printf("Sum is %d ",sum);
// printf("\n");
// return 0;
// }
/*sum of Odd Natural Numbers*/
// Q3 int main()
// {
// int i,n,sum=0;
// printf("Enter Number of Natural No: ");
// scanf("%d",&n);
// for (i=1;i<=n;i++){
//     sum = sum+2+i;
// }
//  printf("Sum is %d ",sum);
// printf("\n");
// return 0;
// }
// Q4 int main()
// {
// int i,n,sum=0;
// printf("Enter Number of Natural No: ");
// scanf("%d",&n);
// for (i=1;i<=n;i++){
//     sum = sum+i*i;
// }
//  printf("Sum is %d ",sum);
// printf("\n");
// return 0;
// }
/*Sum of Cubes of N natural*/
int main()
{
int i,n,sum=0;
printf("Enter Number of Natural No: ");
scanf("%d",&n);
for (i=1;i<=n;i++){
    sum = sum+i*i*i;
}
 printf("Sum is %d ",sum);
printf("\n");
return 0;
}