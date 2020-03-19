#include <stdio.h>
main()
{
    int input;
    scanf("%d", &input);
    if (input % 2 == 0)
    {
        printf("\n%d is even.\n", input);
    }
    else
    {
        printf("\n%d is odd.\n", input);
    }
}

/* Provided Solution

#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number); //An integer number is taken from the test case

//  Write the rest of the program in the box provided below. As the output
// should exactly match with the output provided in the test cases so use exactly the 
// following printf statement wherever and whichever is applicable. 

printf("%d is even.", number);
printf("%d is odd.", number);

// -------------SOLUTION------------------------

   if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
}

*/