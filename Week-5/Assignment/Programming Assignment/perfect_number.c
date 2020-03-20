/*Write a C program to check whether a given number (N) is a perfect number or not?

[Perfect Number - A perfect number is a positive integer number which is equals to the sum of its proper positive divisors.
 For example 6 is a perfect number because its proper divisors are 1, 2, 3 and it’s sum is equals to 6.]*/

#include <stdio.h>
int main()
{
    int num, sum = 0;
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        printf("%d is a perfect number.", num);
    else
        printf("%d is not a perfect number.", num);

    return 0;
}