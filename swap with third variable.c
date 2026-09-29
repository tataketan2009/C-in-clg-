#include <stdio.h>

int main(void)
{
    int first, second, third;

    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);

    third = first;
    first = second;
    second = third;

    printf("After swapping: %d %d\n", first, second);
    return 0;
}