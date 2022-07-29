// Write a program which takes the month number as an input and display
// number of days in that month.

#include <stdio.h>

int main()
{
    int month_num;
    printf("Enter a month number\n");
    scanf("%d", &month_num);

    switch (month_num)
    {
    case 1:
        printf("31days");
        break;
    case 2:
        printf("28days");
        break;
    case 3:
        printf("31days");
        break;
    case 4:
        printf("30days");
        break;
    case 5:
        printf("31days");
        break;
    case 6:
        printf("30days");
        break;
    case 7:
        printf("31days");
        break;
    case 8:
        printf("31days");
        break;
    case 9:
        printf("30days");
        break;
    case 10:
        printf("31days");
        break;
    case 11:
        printf("30days");
        break;
    case 12:
        printf("31days");
        break;
     default:
        printf("invalid month number");   
    }
    return 0;
}