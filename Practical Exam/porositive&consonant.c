#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a porositive\n", ch);
            break;

        default:
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("%c is a consonant\n", ch);
            else
                printf("%c is not an alphabet\n", ch);
    }

    getch();
}
