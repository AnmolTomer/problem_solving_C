#include <stdio.h>
int main()
{
    int x, y, GCD;
    scanf("%d %d", &x, &y); // Numbers taken as test cases to check for GCD
    int z;
    if (x < y)
        z = x;
    else
        z = y;
    for (GCD = z; GCD >= 1; GCD--)
    {
        if ((x % GCD == 0) && (y % GCD == 0))
            break;
    }
    printf("GCD of the numbers %d and %d is : %d", x, y, GCD);
    return 0;
}