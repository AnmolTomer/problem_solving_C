// Write a C program to find sum of following series where the value of N is taken as input
//  1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N

#include <stdio.h>
int main()
{
    int N;
    float sum = 0.0;
    scanf("%d", &N);
    for (int i = N; i > 0; i--)
        sum = sum + ((float)1 / (float)i);
    printf("The sum of the series is %.2f", sum);

    return 0;
}

//  LESSON LEARNT : type-casting is important