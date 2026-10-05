#include<stdio.h>
#include<conio.h>

int reverse(int num)
{
    int rev = 0, rem;

    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}

int main()
{
    int n;

    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    if(n < 100 || n > 999)
    {
        printf("Please enter a valid 3 digit number\n");
        return 0;
    }

    printf("Reversed number = %d\n", reverse(n));

    getch();
}
