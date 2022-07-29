// Write a program which takes the day number of a week and displays a
// unique greeting message for the day.

#include <stdio.h>
int main()
{
    int day_num;
    printf("Enter a day number");
    scanf("%d", &day_num);

    switch (day_num)
    {
    case 1:
        printf("Good Morning!");
        break;
    case 2:
        printf("Very good morning!");
        break;
    case 3:
        printf("Good Afternoon!");
        break;
    case 4:
        printf("Good Evening!");
        break;
    case 5:
        printf("It's nice to meet you.");
        break;
    case 6:
        printf("It's good to see you again.");
        break;
    case 7:
        printf("What's up?");
        break;

    default:
        printf("Invalid day number");
        break;
    }
    return 0;
}