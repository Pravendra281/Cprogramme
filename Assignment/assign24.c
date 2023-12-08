#include<stdio.h>
#include"assign23.c"
/*Print prime between two numbers*/
void printPrime(int a,int b)
{
    int p;
    for(p<a+1;p<b;p++)
    {
        if(isPrime(p))
        printf("%d",p);
    }
}
/*print N term of Fibonnacci series */
void fibonacci(int n)
{
    int a=-1,b=1,c=0;
    while(n+1)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}
/*print Pascal triangle*/
void printPascal(int rows)
{
     int i,j,x,n,r;
    
    for(i=1,n=0;i<=rows;i++,n++)
    {
        r=0;
        x=1;
        for(j=1;j<=2*rows-1;j++)
        {
            if(j>=rows+1-i&& j<=rows-1+i)
            {
                if(x)
                    printf("%d",combi(n,r++));
                else
                    printf(" ");
                x=1-x;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
/*print Armstrong number between two number*/
void printArmstrongBetween(int a,int b)
{
    int x,n,y,i,s;
    for(x=a+1;x<b;x++)
    {
        n=countDigits(x);
        for(i=1,y=x,s=0;i<=n;i++)
        {
            s=s+power(y%10,n);
            y=y/10;
        }
        if(x==s)
            printf("%d ",x);
    }
}
/*print Series sum*/
int seriesSum(int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s=s+fact(i);
    }
    return s;
}