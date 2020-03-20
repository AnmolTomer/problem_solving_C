// Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not.
// For example 8 can be expressed as 2^3.

#include <stdio.h>
int main()
{
    int num, temp, flag;
    scanf("%d", &num);
    temp = num;
    while (temp != 1)
    {
        if (temp % 2 != 0)
        {
            flag = 1;
            break;
        }
        temp /= 2;
    }
    if (flag == 1)
        printf("%d cannot be expressed as power of 2.", num);
    else
        printf("%d is a number that can be expressed as power of 2.", num);
}

//  LESSON LEARNT: Use break and flag wisely.