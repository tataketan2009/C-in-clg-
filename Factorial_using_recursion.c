#include <stdio.h>

long int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n;
    long int f;

    printf("Enter a number: ");
    scanf("%d", &n);

    f = fact(n);

    printf("Factorial = %ld", f);

    return 0;
}