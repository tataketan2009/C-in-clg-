#include <stdio.h>

// Function to check prime number
int isPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

// Function to check Armstrong number
int isArmstrong(int n)
{
    int original, remainder, sum = 0;

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        sum += remainder * remainder * remainder;
        n /= 10;
    }

    return (sum == original);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is not a Prime Number.\n", num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    return 0;
}