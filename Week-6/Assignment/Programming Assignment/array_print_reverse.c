#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of the array in reverse order are: \n");
    for (int i = n - 1; i >= 0; i--)
        printf("%d\t", arr[i]);
    return 0;
}