#include<stdio.h>
// /*write a recursive function to print first N even natural number in reverse order*/TSRN 
// Q1
void PrintNEvenReverse(int n)
{
    if(n>0)
    {
        printf("%d",2*n); 
        PrintNEvenReverse(n-1);
   }
}
//Q2/*write a recursive function to print Squares of first N natural number*/TSRN 

void PrintN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d",n*n);
    }
}
//Q3/*write a recursive function to print binary of given decimal number*/TSRN 

void btod(int x)
{
    if(x>=1)
    {
        btod(x/2);
        printf("%d",x%2);
    }
}
//Q4/*write a recursive function to print binary of given octal number*/TSRN 
void btoO(int x)
{
    if(x>=1)
    {
        btoO(x/8);
        printf("%d",x%8);
    }
}
//Q5/*write a recursive function to print reverse of a given number*/TSRN 

void reverse(int x)
{ 
    if(x)
    {
    printf("%d",x%10);
    reverse(x/10);
    } 
}