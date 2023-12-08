#include<stdio.h>
// /*write a recursive function to calculate sum of first N natural number */TSRS
// Q1
int sumN(int n)
{
    if(n==1)
    return 1;
    return n+sumN(n-1);
}
//Q2/*write a recursive function to calculate sum of first N odd natural number */TSRS

int SumNOdd(int n)
{
    if(n==1)
    return 1;
    return 2*n-1+sumNOdd(n-1); 
}
//Q3/*write a recursive function to calculate sum of first N even natural number */TSRS
int SumNEven(int n)
{
    if(n==1)
    return 2;
    return 2*n+sumNEven(n-1); 
}
//Q4/*write a recursive function to calculate sum of square of first n natural number */TSRS
int sumNSquare(int n)
{
    if(n==1)
    return 1;
    return n*n+sumNSquare(n-1);
}
//Q4/*write a recursive function to calculate sum of digit of given number */TSRS
int sumNDigit(int n)
{
    if(n==0)
    return 0;
    return sumNDigit(n/10)+n%10;
}