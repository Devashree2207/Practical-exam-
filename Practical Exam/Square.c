#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a; 

    printf("Squares of elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d square = %d\n", *(p + i), *(p + i) * *(p + i));
    }

    getch();
}
