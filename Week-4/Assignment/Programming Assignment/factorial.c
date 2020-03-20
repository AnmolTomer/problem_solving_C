#include <stdio.h>
main()
{
    int input, fact = 1;

    printf("\nEnter the integer, whose factorial you wish to find: ");
    scanf("%d", &input);
    int temp = input;
    while (input > 0)
    {
        fact = fact * input;
        input--;
    }
    printf("\nThe Factorial of %d is: %d.\n", temp, fact);
}