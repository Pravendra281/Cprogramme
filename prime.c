#include <stdio.h>
#include <conio.h>
int main()
{
    int i, x;
    printf("Enter a Number");
    scanf("%d", &x);
    for (i = 2; i <= x - 1; i++)
    {
        if (x % i == 0)
            break;
    }
    if (i == x)
        printf("Prime");
    else
        printf("Not Prime");
    printf("\n");
    return 0;
}