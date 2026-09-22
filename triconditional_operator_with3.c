#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 15;
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c); // Using the ternary operator to find the maximum among three numbers
    printf("The maximum value is: %d\n", max);
    return 0;
}