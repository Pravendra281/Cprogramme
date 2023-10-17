#include<stdio.h>
/*Prime Number Under 100*/
// Q1 int main()
// {
//     int i,x;
//     /*x is that number and i is variable by which we divide and check*/
//     for (x=2;x<=99;x++)
//     {
//        for (i=2;i<=x-1;i++)
//         if(x%i==0)
//         break;
//         if(i==x)
//         printf("%d ",x);
//     }
//     printf("\n");
//     return 0;
// }
/*Prime  between two Number*/
// Q2 int main()
// {
//     int i,x,l,u;
//     /*x is that number and i is variable by which we divide and check*/
//     printf("Enter lower and upper Number");
//     scanf("%d%d",&l,&u);
//     for (x=l;x<=u;x++)
//     {
//        for (i=2;i<=x-1;i++)
//         if(x%i==0)
//         break;
//         if(i==x)
//         printf("%d ",x);
//     }
//     printf("\n");
//     return 0;
// }
/*Find Next prime of given Number*/
// Q3 int main()
// {
//     int i,x;
//     /*x is that number and i is variable by which we divide and check*/
//     printf("Enter a Number: ");
//     scanf("%d",&x);
//     /*x jo Number enter hua uska next number check krna hai prime isliye x++*/
//     for (x++;;x++)
//     {
//        for (i=2;i<=x-1;i++)
//         if(x%i==0)
//         break;
//        if(x==i)
//        {
//             printf("%d",x);
//             break;
//             /*is break se bahar wale for loop se bahar ana hai */
//        }
//     }
//     printf("\n");
//     return 0;
// }
/*Hcf of two Number*/
// Q4 int main()
// {
//   int a,b,H;
//   /*H stand for HCF*/
//   printf("Enter two Numbers: ");
//   scanf("%d%d",&a,&b);
//   /*here we print small as in hcf of a,b should be less than= smaller one */
//   for(H=a<b?a:b;H>=1;H--)
//   {
//     if(a%H==0 && b%H==0)
//     break;
//   }
//   printf("Hcf is %d",H);
//     printf("\n");
//     return 0;
// }
/*check for co-prime*/
int main()
{
  int a,b,H;
  /*H stand for HCF*/
  printf("Enter two Numbers: ");
  scanf("%d%d",&a,&b);
  /*here we print small as in hcf of a,b should be less than= smaller one */
  for(H=a<b?a:b;H>=1;H--)
  
    if(a%H==0 && b%H==0)
    break;
  if(H==1)
  printf("Number is Co-prime");
  else
  printf("Not Co-prime");

    printf("\n");
    return 0;
}