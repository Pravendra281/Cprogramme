#include <stdio.h>
 int main()
{
    float cp, sp;
    float profit, loss;
    printf("Enter value of cp and sp");
    scanf("%f%f", &cp,&sp);
    if (sp >= cp)
    {
        profit = (sp - cp) / cp * 100;
        printf("Profit percentage = %.2f%%", profit);
    }
    else
    {
        loss = (cp - sp) / cp * 100;
        printf("Loss percenatge = %.2f%%", loss);
    }

    printf("\n");
    return 0;
}
// Q2 int main()
// {
//     int m1,m2,m3,m4,m5;
// printf("Enter marks od Five Subject");
// scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
// if (m1>33 && m2>33 && m3>33 && m4>33 && m5>33)
// printf("Result:Pass");
// else
// printf("Result : Fail");
//     printf("\n");
//     return 0;
// }
// Q3 int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (ch >= 'A' && ch <= 'Z')
//         printf("Uppercase Alphabet");
//     if (ch >= 'a' && ch <= 'z')
//         printf("Lowercase Alphabet");
//     printf("\n");
//     return 0;
// }
// Q4 int main()
// {
//     int x;
//     printf("Enter a Number : ");
//     scanf("%d", &x);
//     if (x % 2 == 0 && x % 3 == 0)
//         printf("Number is divisible by 2 and 3 both");
//     else
//         printf("Number is not divisible by both");
//     printf("\n");
//     return 0;
// }
// int main()
// {
//     int x;
//     printf("Enter a Number : ");
//     scanf("%d", &x);
//     if (x % 7 == 0 || x % 3 == 0)
//         printf("Number is divisible by 7 or 3 both");
//     else
//         printf("Number is not divisible by either of them");
//     printf("\n");
//     return 0;
// }