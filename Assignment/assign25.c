#include<stdio.h>
// /*write a recursive function to print first N natural number*/TSRN 
// Q1
void PrintN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d",n);
    }
}
// Q2 // /*write a recursive function to print first N natural number in Reverse*/TSRN 
void PrintNReverse(int n)
{
    if(n>0)
    {
         printf("%d",n);
        PrintNReverse(n-1);
       
    }
}

// Q3 /*write a recursive function to print first N ODD natural number*/TSRN 

void PrintNOdd(int n)
{
    if(n>0)
    {
         PrintNOdd(n-1);
         printf("%d",2*n-1);      
    }
}
// Q4 /*write a recursive function to print first N ODD natural number in reverse*/TSRN 
void PrintNOddReverse(int n)
{
    if(n>0)
    {
         
         printf("%d",2*n-1);  
         PrintNOddReverse(n-1);    
    }
}
// Q5/*write a recursive function to print first N even natural number in reverse*/TSRN
void PrintNEven(int n)
{
    if(n>0)
    {
         PrintNEven(n-1);
         printf("%d",2*n);      
    }
}
