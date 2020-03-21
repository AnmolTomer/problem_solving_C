#include <stdio.h>
void main()
{
    int a[10], i, min;
    printf("Enter 10 values: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    min = 99999;
    for (i = 0; i < 10; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    printf("\n Minimum is %d", min);
}