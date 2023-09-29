#include <stdio.h>
#include <conio.h>
int main()
{
    int age ,amount,time;
    float si;
    printf("Enter Your age and Amount to Invest");
    scanf("%d%d",&age,&amount);
    if (age>=18 && age<=55 && amount>=10000 &&amount<=1000000){
   if(age<=25)
   time=30;
   else if(age>=40)
   time=10;
   else
   time=20;
   si=(amount*5*time/100.0);
   printf("\nYour Maturity Amount is %f",amount+si);
    }
    else
    {
        printf("You are Not Eligible for the scheme");
    }
    printf("\n");
    return 0;
}