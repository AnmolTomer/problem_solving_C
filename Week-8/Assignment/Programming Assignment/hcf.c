#include <stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF.

int main()
{
    int a, b, c, d, result;
    scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
    result = HCF(HCF(a, b), HCF(c, d));
    printf("The HCF is %d", result);
    return 0;
}

//Complete the rest of the program to calculate HCF
int HCF(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return (HCF(a - b, b));
    return (HCF(a, b - a));
}