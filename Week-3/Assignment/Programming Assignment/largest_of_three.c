#include <stdio.h>
main()
{
    int alpha, beta, charlie;
    scanf("%d %d %d", &alpha, &beta, &charlie);
    if ((alpha > beta) && (alpha > charlie))
        printf("\nLargest number is %d\n", alpha);
    else if (beta > charlie)
    {
        printf("\nLargest number is %d\n", beta);
    }
    else
        printf("\nLargest number is %d\n", charlie);
}