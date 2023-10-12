#include<stdio.h>
/*Factorial of a Number*/
// Q1 int main()
// {
//     int n,fac=1;
//     printf("Enter Value of N: ");
//     scanf("%d",&n);
//     while(n)
//     {
//      fac=fac*n;
//      n--;
//     }
//     printf("Factorial is %d",fac);
//     printf("\n");
// }
/*count Number of digit*/
// Q2 int main()
// {
//     int x,count;
//     printf("Enter a Number");
//     scanf("%d",&x);
//    while (x)
//    {
//    x=x/10;
//    count++;
//    }
//    printf("Total number of digit is %d",count);
//     printf("\n");

// }

/*Prime or not
number divisible by only 1 and itself except 1 as 1 in neither prime nor composite*/
// Q3 int main()
// {
//     int x,i;
//     printf("Enter a Number");
//     scanf("%d",&x);
//     for (i=2;i<=x-1;i++)
//     /*i=2 because i divisble by 1 andx divisible by x so x-1 */
//     {
//      if (x%i==0)
//       break;
//       /*as x we will check from 1 to x-1 if full divisble then not prime*/
//     }
//     if(i==x)
//     printf("Prime");
//     else
//     printf("Not Prime");
//      printf("\n");
// return 0;
// }
/*Lcm of two Numbers*/
// int main()
// {
//   int a,b,L;
//   printf("Enter two number");
//   scanf("%d%d",&a,&b);
//   for (L=a>b?a:b;L<=a*b;L++)
//   {
//     if(L%a==0&& L%b==0)
//     break;
//   }
//   printf("Lcm is %d",L);
//   printf("\n");
//   return 0;
// }
/*Reverse a given Method*/
int main()
{
  int x,y=0;
  printf("Enter a Number ");
  scanf("%d",&x);
  while(x)
  {
    y=y*10+x%10;
    x/=10;
  }
  printf("Reverse is %d",y);
  printf("\n");
  return 0;
}