#include <stdio.h>
int factorial(int a);

int main()
{
    int a;

    printf("Enter the Number for Factorial=");
    scanf("%d", &a);

    printf("The Factorial of %d = %d", a, factorial(5));
}

int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}