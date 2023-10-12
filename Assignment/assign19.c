#include <stdio.h>
#include<stdlib.h>
// Q1 int main()
// {
//     int month;
//     printf("Enter month Name: ");
//     scanf("%d",&month);
//     switch (month)
//     {
//     case 2:
//     printf("Number of days 28 or29");
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//     printf("Number of days 30");
//     break;
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//     printf("Number of days will be 31");
//     break;
//     default:
//     printf("Invalid Month Number");
//         break;
//     }
// }
int menu()
{
    int choice;
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}
void q2()
{
    int a, b;
    while (1)
    {
        switch (menu())
        {
        case 1:
            printf("\nEnter two numbers");
            scanf("%d%d", &a, &b);
            printf("Sum is %d", a + b);
            break;
        case 2:
            printf("\nEnter two numbers");
            scanf("%d%d", &a, &b);
            printf("Difference is %d", a - b);
            break;
        case 3:
            printf("\nEnter two numbers");
            scanf("%d%d", &a, &b);
            printf("Product is %d", a * b);
            break;
        case 4:
            printf("\nEnter two numbers");
            scanf("%d%d", &a, &b);
            printf("Quotient is %d", a / b);
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice, retry");
        }
    }
}