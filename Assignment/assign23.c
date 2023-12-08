#include<stdio.h>
/*calculate Lcm of two numbers so return something Nature*/
int Lcm(int a,int b)
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
      if(L%a==0 && L%b==0)
      return L;
    return 1;  
}
/*calculate HCF of two numbers so return something Nature*/
int HCF(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
    if(a%H==0 && b%H==0)
     return H;
    return 1; 
}
/*check whether a given no is prime or not as we have to checl so return something Nature*/

int isPrime(int n)
{
    int i;
    for(i=2;i<=n;i++)
    if(n%i==0)
    return 0;
   return 1; 
}
/*Find Nextprime of given number as we have to find so return something Nature*/

int nextPrime(int n)
{
    while(!isPrime(++n));
    return n;
}
/*Print first N prime so as we have to print so return nothing Nature*/

void printPrime(int n)
{
    int i,x;
    for(i=1,x=2;i<=n;i++)
    {
        printf("%d ",x);
        x=nextPrime(x);
    }
}
int main()
{
    printPrime(10);
    printf("\n");
    return 0;
}
