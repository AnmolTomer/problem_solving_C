// Write a C program to count total number of digits of an Integer number (N).

#include <stdio.h>
int main()
{
    int n;
    int digits = 0;
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        digits++;
        n /= 10;
    }
    printf("The number %d contains %d digits.", temp, digits);
    return 0;
}