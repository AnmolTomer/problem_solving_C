#include <stdio.h>
int main()
{
    int number;             // say user gives 1234
    scanf("%d", &number);   // takes in 1234
    int last = number % 10; // last = 1234 % 10 --> i.e. 4
    number = number / 10;   // number = 1234 / 10 = 123 i.e. number with last digit removed
    int first;              // variable to hold the first digit that we will find
    while (number > 0)      // as long as number is greater than 0, after iteration 1 as 12 > 0 continue, after iteration 2 as 1 > 0 continue, stop
    {
        first = number % 10;  // first = 123 % 10 = 3 for iteration 1, 12%10 = 2 for iteration 2, 1%10 = 1 after final iteration is stored
        number = number / 10; // number =  123/10 = 12, for iteration 1, 12/10 = 1 after iteration 2
    }
    int sum = first + last; // Sum = first + last = 4 + 1  = 5
    printf("Sum of First and Last digit is : %d", sum);
    return 0;
}