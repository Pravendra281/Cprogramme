#include<stdio.h>
#include<conio.h>

// Q1) int main()
// {
//     printf("Hello Student");
//     return 0;
// }

// Q2) int main()
// {
//     printf("Hello\nStudent");
//     return 0;
// }

// Q3) imporatnt trick  int main()
// {
//     printf("\"MySIRG\"");
//     return 0;
// }

// Q4) int main()
// {
//     printf("\\n");
//     return 0;
// }

// Q5) int main()
// {
//     printf("\\r");
//     return 0;
// }

// Q6) int main()
// {
//     printf("\"Teacher's Day\"");
//     return 0;
// }


// Q7) int main()
// {
//     int x,y,z;
//     printf("Enter two numbers");
//     scanf("%d%d",&x,&y);
//     z=x+y;
//     printf("Sum of %d and %d is %d",x,y,z);
//     return 0;
// }

// Q8) int main()
// {
//     int x,y,z;
//     printf("Enter a numbers");
//     scanf("%d",&x);
//     printf("%d",x*x);
//     return 0;
// }

// Q9) int main()
// {
//     int x,y,z;
//     printf("Enter Length and Breadth of Rectangle:");
//     scanf("%d%d",&x,&y);
//     z=x*y;
//     printf("Area of Rectangle of side %d and %d is %d",x,y,z);
//     return 0;
// }

int main()
{
    int r;
    float ar;
    printf("Enter Radius of Circle:");
    scanf("%d",&r);
    ar=3.14*r*r;
    printf("Area of circle of radius %d is %f",r,ar);
    return 0;
}