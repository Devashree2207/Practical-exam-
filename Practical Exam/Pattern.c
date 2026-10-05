#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, num;

    for(i = 1; i <= 5; i++)
    {
        num = 11 - i;
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num * num);
        }
        printf("\n");
    }

    getch();
}
