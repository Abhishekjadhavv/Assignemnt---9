// Program to check whether a year is a leap year or not. Using switch
// statement

#include <stdio.h>

int main()
{
    int year, choice;
    printf("Enter a year and 1\n");
    scanf("%d%d", &year, &choice);
    switch (choice)
    {
    case 1:
        if (year % 4)
        {
            printf("not leap year");
        }
        else if (year % 100)
        {
            printf("leap year");
        }
        else if (year % 400)
        {
            printf("not leap year");
        }
        else
        {
            printf("leap year");
        }
        break;
    default:
        printf("invalid choice");
    }

    return 0;
}