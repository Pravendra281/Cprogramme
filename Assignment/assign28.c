#include<stdio.h>
// Q1 write a recursive function to calculate factorial of given number TSRS

int Fact(int n)
{
    if (n==0)
    return 1;
    return (n*Fact(n-1));
}
// Q2 write a recursive function to calculate fHCF of given number TSRS
int hcf(int a,int b)
{
    if (a>b)
    {
      if(a%b==0)
      return b;
      else
      return hcf(a%b,b); 
    }
    else
    {
      if(b%a==0)
      return a;
      else
      return hcf(a,b%a);
    }
}
// Q3 write a recursive function to print first N term of Fibonacci series TSRS
 int Fib(int n)
 {
    if(n==0||n==1)
    return n;
    return fib(n-1)+fib(n-2);
 }

 void printFib(int n)
 {

  if(n>=0)
  {
    printfib(n-1);
    printf("%d",fib(n));

  }

    // int i;
    // for(i=0;i<=n;i++)
    // {
    //     printf("%d",fib(i));
    // }
 }