#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
int r,k,l,b,x,y,z;
float a,ar,av;
// while added as programme ended every after every choices;
while(1){    
printf("\n1.Area of a circle");
printf("\n2.Area of Rectangle");
printf("\n3.Average of three numbers");
printf("\n4.Exit");
printf("\n\n Enter your choice");
scanf("%d",&k);
switch(k)
{
case 1:
printf("Enter radius of a circle");
scanf("%d",&r);
a=3.14 *r*r;
printf("Area of circle is %f",a);
break;
case 2:
printf("Enter length and breadth of Rectangle");
scanf("%d%d",&l,&b);
ar=l*b;
printf("Area of Rectangle is %f",ar);
break;
case 3:
printf("Enter three numbers");
scanf("%d%d%d",&x,&y,&z);
av=(x+y+z)/3.0;
printf("Area of Rectangle is %f",av);
break;
case 4:
exit(0);
default:
printf("Enter valid choice");
}}
}