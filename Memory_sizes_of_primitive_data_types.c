#include <stdio.h>

int main()
{
    printf("Memory size of different primitive data types:\n\n");

    printf("Size of char : %zu byte(s)\n", sizeof(char));
    printf("Size of int : %zu byte(s)\n", sizeof(int));
    printf("Size of float : %zu byte(s)\n", sizeof(float));
    printf("Size of double : %zu byte(s)\n", sizeof(double));
    printf("Size of short int : %zu byte(s)\n", sizeof(short int));
    printf("Size of long int : %zu byte(s)\n", sizeof(long int));
    printf("Size of long long : %zu byte(s)\n", sizeof(long long int));
    printf("Size of unsigned int: %zu byte(s)\n", sizeof(unsigned int));

    return 0;
}