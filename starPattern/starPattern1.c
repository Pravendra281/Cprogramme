#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j ,lines;
    printf("Enter number off lines: ");
    scanf("%d",&lines);

    for (i=1; i<=lines; i++)
    {
        for (j=1; j<=lines; j++)
        {
            if (j<=lines+1-i)
                printf("*");
                else
                 printf(" ");
        }
        printf("\n");
    } getch();
}