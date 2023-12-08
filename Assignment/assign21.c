#include<stdio.h>
/*Write a function to calulate area of circle as we have to calculate so Return something*/
float area(int r)
{
    return 3.14*r*r;
}
/*Write a function to calulate simple Interest as we have to calculate so Return something*/
float SI(int p,float r,int t)
{
    return p*r*t/100;
}
/*Write a function to check whether given number is odd or even ,return 1 if even or return 0 when odd as we have to check so Return something not print */
int isEven(int n)
{
    return n%2==0;
}
/*Write a function to print first N Natural Number as we have to print so Return Nothing*/

 void Natural(int n)
{
  int i;
  for (i=1;i<=n;i++)
  printf("%d",i);
}

/*Write a function to print first N odd Natural Number as we have to print so Return Nothing*/
void odd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d",2*i-1);
}
