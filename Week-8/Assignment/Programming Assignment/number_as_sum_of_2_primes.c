#include <stdio.h>

int checkPrime(int n); //Write the function to check prime number

int main()
{
    int n;
    int i;
    scanf("%d", &n); //An integer number is taken from the test case
    int flag = 0;
    for (i = 2; i <= n / 2; ++i)
    {
        if (checkPrime(i) == 1)
        {
            if (checkPrime(n - i) == 1)

            {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }

    if (flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);

    /* Complete the program
Use your own variables as required. 
Use the printf statement as below:
printf("%d = %d + %d\n", n, variable1, variable2);
printf("%d cannot be expressed as the sum of two prime numbers.\n", n);

*/
    return (0);
}

int checkPrime(int n)
{
    int i, isPrime = 1;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}