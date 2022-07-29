// Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int choice, num1, num2, result;
    while (1)
    {  
        printf("1.Addition of two numbers\n");
        printf("2.Subtraction of two numbers\n");
        printf("3.Multiplication of two numbers\n");
        printf("4.Division of two numbers\n");
        printf("5.Exit\n");
        printf("Select your choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two number\n");
            scanf("%d%d", &num1, &num2);
            result = num1 + num2;
            printf("Sum of two numbers is %d", result);
            break;
        case 2:
            printf("Enter two number\n");
            scanf("%d%d", &num1, &num2);
            result = num1 - num2;
            printf("sub of two numbers is %d", result);
            break;
        case 3:
            printf("Enter two number\n");
            scanf("%d%d", &num1, &num2);
            result = num1 * num2;
            printf("Multi of two numbers is %d", result);
            break;
        case 4:
            printf("Enter two number\n");
            scanf("%d%d", &num1, &num2);
            result = num1 / num2;
            printf("div of two numbers is %d", result);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice");
        }
        getch();
        system("cls");
    }
}