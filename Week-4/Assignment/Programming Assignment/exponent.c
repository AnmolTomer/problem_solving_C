#include <stdio.h>
int main()
{
    int base, exp;
    scanf("%d %d", &base, &exp);
    unsigned long int result = 1;
    while (exp > 0)
    {
        result = result * base;
        exp--;
    }
    printf("The result is : %ld", result);
    return 0;
}