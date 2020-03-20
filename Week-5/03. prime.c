#include <stdlib.h>
#include <stdio.h>
void main()
{
    int n, i = 2;
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number as it is divisible by %d.", n, i);
            exit(0);
        }
        i++;
    }
    printf("%d is a prime number.", n);
}