#include <stdio.h>

int main()
{
    int a, b, c, big;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    big = (a > b ? a : b) > c ? (a > b ? a : b) : c;

    printf("Big number = %d", big);

    return 0;
}