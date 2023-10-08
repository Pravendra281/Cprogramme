#include<stdio.h>
// Q1 int main()
// {
//     int x;
//     printf("Enter a Number : ");
//     scanf("%d",&x);
//     if(x>0)
//     printf("Number is Positive");
//     else if(x<0)
//     printf("Number is Negative");
//     else
//     printf("Number is zero");

//     printf("\n");
//     return 0;
// }
// Q2 int main()
// {
//     char ch;
//    printf("Enter a character: ");
//    scanf("%c",&ch);
//    if(ch>='A'&& ch<='Z')
//    printf("Given character is Uppercase");
//    else if(ch>='a' && ch<='z')
//    printf("Given character is lowercase");
//    else if(ch>='0' && ch<='9')
//    printf("Number is digit");
//   else
//   printf("Number is Special charater");
   

//     printf("\n");
//     return 0;
// }
// Q3 int main()
// {
//   int l1,l2,l3;
//   printf("Enter length of side of triangle : ");
//   scanf("%d%d%d",&l1,&l2,&l3);
//    if(l1+l2>l3 && l2+l3>l1 && l3+l1>l2)
//    printf("valid Triangle");
//    else
//    printf("Invalid Traingle");

//     printf("\n");
//     return 0;
// }
int main()
{
  int month;
  printf("Enter Month Number: ");
  scanf("%d",&month);
  if(month<1 || month >12)
        printf("Invalid month number");
    else if(month==2)
        printf("28 or 29 days");
    else if(month==4 || month==6 || month==9 || month==11)
        printf("30 Days");
    else
        printf("31 Days");


    printf("\n");
    return 0;
}