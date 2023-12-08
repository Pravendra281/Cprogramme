#include<stdio.h>
/*write a function to calculate factorial of a Number */
int Factorial(int n)
{  int i,f;
 for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
/*Write a function to calculate no. of combination one can make from n items and r selected at at time*/
int comb(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
/*Write a function to calculate no. of arrangement one can make from n items and r selected at at time*/
int permutaion(int n,int r)
{
    return fact(n)/fact(n-r);
}
/*Write a function to check whether a given number contains a digit or not*/
int iscontain(int num,int digit)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num=num/10;
    }
    return 0;
}
/*print all prime factor of given number*/
void printPrimeFactors(int n)
{
    int i=2;
    while(n>1)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        i++;
    }
}