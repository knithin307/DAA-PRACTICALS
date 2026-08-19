#include <stdio.h>

int fact(int n)
{
    int result;

    if(n <= 1)
        return 1;

    result = fact(n - 1);
    return n * result;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial = %d", fact(number));

    return 0;
}