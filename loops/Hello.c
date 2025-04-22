#include <stdio.h>

int main()
{

    // printf("Hello World \n");
    // printf("Hello World \n");
    // printf("Hello World \n");
    // printf("Hello World \n");

    // int age = 25;
    // float pi = 3.142;
    // printf("value of pi is %f \n", pi);
    // printf("age is %d \n", age);

    // int num;
    // printf("Enter number");
    // scanf("%d", &num);
    // printf("Number is  : %d", num);

    // int a, b;
    // printf("Enter a :");
    // scanf("%d", &a);

    // printf("Enter b :");
    // scanf("%d", &b);

    // int sum = a + b;
    // printf("Sum is : %d", sum);

    // WAP to print area of a square (side is given)
    // int a = 4;
    // printf("Area of square is : %d", a * a);

    // WAP to print C of a rectangle (input sides)
    // int a, b;
    // printf("Enter first side :");
    // scanf("%d", &a);

    // printf("Enter second side :");
    // scanf("%d", &b);

    // printf("Circumference of rectangle is : %d", a + a + b + b);

    // WAP to find radius of a circle (radius given)
    // float r;
    // printf("Enter radius of circle :");
    // scanf("%f", &r);
    // printf("Area of circle is : %f", 3.142 * r * r);

    // WAP to take a number and output its cube
    // float n;
    // printf("Hello World");
    // scanf("%f", &n);
    // printf("Cube of entered number is : %f", n * n * n);

    // WAP to check if a nubmber is divisible by 2 or not (if-else)
    // int x;
    // printf("Enter your number : ");
    // scanf("%d", &x);
    // if (x % 2 == 0)
    // {
    //     printf("The number is divisible by 2");
    // }

    // else
    // {
    //     printf("The number is not divisible by 2 ");
    // }

    // WAP to find if a number is divisible by 2 (0 n 1 output wala)
    // int x;
    // printf("Enter your number :");
    // scanf("%d", &x);
    // printf("%d", x % 2 == 0);

    // WAP to find if a number is odd or even
    // int x;
    // printf("Enter your number :");
    // scanf("%d", &x);
    // printf("%d", x % 2 == 0);

    // WAP to print if a number is gretater than 9 and less than 100
    // int x;
    // printf("Enter your number :");
    // scanf("%d", &x);
    // printf("%d", x > 9 && x < 100);

    // WAP to find the average of 3 numbers
    // int x;
    // int y;
    // int z;
    // int avg;
    // printf("Enter x :");
    // scanf("%d", &x);
    // printf("Enter y :");
    // scanf("%d", &y);
    // printf("Enter z :");
    // scanf("%d", &z);

    // avg = (x + y + z) / 3;
    // printf("Average is : %d", avg);

    // Write a program to print the smallest number of two.
    // int x;
    // int y;
    // printf("Enter x :");
    // scanf("%d", &x);
    // printf("Enter y:");
    // scanf("%d", &y);
    // if (x < y)
    // {
    //     printf("The smaller number is : %d", x);
    // }
    // else
    // {
    //     printf("The smaller nummbre is : %d", y);
    // }

    // WAP to check if a studdent passed or failed
    // int x;
    // printf("Enter your marks :");
    // scanf("%d", &x);
    // if (x <= 30 && x >= 0)
    // {
    //     printf("You have failed");
    // }
    // else if (x > 30 && x <= 100)
    // {
    //     printf("you have passed");
    // }
    // else
    //     printf("Enter valid marks");

    // WAP to give grades to a student
    // int x;
    // printf("Enter your marks :");
    // scanf("%d", &x);
    // if (x >= 0 && x < 30)
    // {
    //     printf("Your grade is C");
    // }
    // else if (30 <= x && x < 70)
    // {
    //     printf("Your grade is B");
    // }
    // else if (70 <= x && x < 90)
    // {
    //     printf("Your grade is A");
    // }
    // else if (90 <= x && x < 100)
    // {
    //     printf("Your grade is A+");
    // }
    // else
    // {
    //     printf("Enter valid marks");
    // }

    // WAP tocheck if entered character is uppercase or not
    // char ch;
    // printf("Enter your character :");
    // scanf("%c", &ch);

    // if (ch >= 'A' && ch <= 'Z')
    // {
    //     printf("The character is Uppercase");
    // }
    // else if (ch >= 'a' && ch <= 'z')
    // {
    //     printf("The character is Lowercase");
    // }
    // else
    // {
    //     printf("Enter english characters");
    // }

    // int x;
    // printf("Enter temperature in Farenheit :");
    // scanf("%d", &x);

    // printf("Temperature in Celsiusis is %d", (x - 32) * 5 / 9);

    // int x, y, z;
    // printf("Enter x , y and z :");
    // scanf("%d %d %d", &x, &y, &z);

    // printf("%d", x);
    // printf("%d", y);
    // printf("%d", z);

    // int marks;
    // printf("Enter marks :");
    // scanf("%d", &marks);
    // marks = marks / 10;
    // switch (marks)
    // {
    // case 4:
    //     printf("Grade F");

    //     break;
    // case 5:
    //     printf("Grade E");

    //     break;
    // case 6:
    //     printf("Grade D");

    //     break;
    // case 7:
    //     printf("Grade C");

    //     break;
    // case 8:
    //     printf("Grade B");

    //     break;
    // case 9:
    //     printf("Grade A");

    //     break;
    // case 10:
    //     printf("Grade A");

    //     break;

    // default:
    //     printf("Enter valid marks");
    //     break;
    // }

    // ELectricity bill
    // /*float bill, units;

    // printf("Enter the units consumed=");
    // scanf("%f", &units);

    // if (units <= 50 && units >= 0)
    // {
    //     bill = units * 3.50;
    //     printf("Electricity Bill=%f Rupees", bill);
    // }
    // else if (units <= 100 && units > 50)
    // {
    //     bill = 50 * 3.50 + (units - 50) * 4;
    //     printf("Electricity Bill=%f Rupees", bill);
    // }
    // else if (units <= 250 && units > 150)
    // {
    //     bill = 50 * 3.50 + 100 * 4 + (units - 150) * 5.20;
    //     printf("Electricity Bill=%f Rupees", bill);
    // }

    // else if (units > 250)
    // {
    //     bill = 50 * 3.50 + 100 * 4 + 100 * 5.20 + (units - 250) * 6.50;
    //     printf("Electricity Bill=%f Rupees", bill);
    // }
    // else
    // {
    //     printf("Please enter valid consumed units...");
    // }*/

    // int n, term = 0;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    // for (int i = 0; term <= n; i++)
    // {
    //     printf("%d\n", term);
    //     term = (term * 2) + 1;
    // }
    int n, m;
    printf("Enter :");
    scanf("%d %d", &n, &m);

    n = n ^ m;
    m = n ^ m;
    n = n ^ m;

    printf("%d %d", n, m);

    return 0;
}
