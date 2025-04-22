#include <stdio.h>
#include <math.h>
int main()
{

    // WAP to print numbers from 1 to 10 (for loop)
    // for (int i = 0; i <= 10; i = i + 1)
    //     printf("%d \n", i);

    // while loop
    // int i = 0;
    // while (i <= 10)
    // {
    //     printf("%d \n", i);
    //     i++;
    // }

    // do while loop
    // int i = 1;
    // do
    // {
    //     printf("%d \n", i);
    //     i++;
    // } while (i <= 10);

    // WAP to find the sum of first n natural numbers
    // int sum = 0;
    // int n;
    // printf("Enter n :");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    //     sum = sum + i;
    // printf("%d", sum);

    // WAP to print the table of a number entered by the user
    // int n;
    // printf("Enter n :");
    // scanf("%d", &n);

    // for (int i = 1; i <= 10; i++)
    //     printf("%d \n", n * i);

    // Keep taking inputs from the user until the user enters an odd number
    // int n;
    // do
    // {
    //     printf("Enter your number : ");
    //     scanf("%d", &n);
    //     printf("%d \n", n);

    //     if (n % 2 != 0)
    //     {
    //         break;
    //     }

    // } while (1);
    // printf("Thank you");

    // WAP to keep taking numbers from a user until it is divisible by 7
    // int n;
    // do
    // {
    //     printf("Enter your number :");
    //     scanf("%d", &n);
    //     printf("You entered %d \n", n);
    //     if (n % 7 == 0)
    //     {
    //         break;
    //     }

    // } while (1);
    // {
    //     printf("%d is a multiple of 7 \n", n);
    //     printf("Thank you");
    // }

    // WAP to print all numbers from 1 to 10 except 6
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i == 6)
    //     {
    //         continue;
    //     }
    //     printf("%d \n", i);
    // }

    // WAP tp print all odd numbers from 5 1o 50
    // for (int i = 5; i <= 50; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         continue;
    //     }
    //     printf("%d \n", i);
    // }

    // WAP to print the factorial of a number n
    int n, fact = 1;
    printf("Enter your number :");
    scanf("%d", &n);
    printf("You entered %d \n", n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf(" %d", fact);

    // WAP to print table of a number in reverse order
    // int n;

    // printf("Enter your number :");
    // scanf("%d", &n);
    // for (int i = 10; i >= 1; i--)
    // {
    //     printf("%d \n", n * i);
    // }

    // WAP to find sum of all numbers between 5 n 50
    // int sum = 0;
    // for (int i = 5; i <= 50; i++)
    // {
    //     sum = sum + i;
    // }
    // printf(" %d", sum);

    // int n;
    // printf("Enter n :");
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i += 2)
    // {
    //     printf("%d \n", i);
    // }

    return 0;
}
