#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sizes of array one and two: "); // Take in a and b (size) of 2 arrays
    scanf("%d %d", &a, &b);
    c = a + b;                        // Add the size of two arrays to get size of combined larger array
    int arr_a[a], arr_b[b], arr_c[c]; // init array as per size. Alternate would be to specify arr_a[100] statically

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr_a[i]);
        arr_c[i] = arr_a[i];
    }

    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr_b[i]);
        arr_c[i + a] = arr_b[i];
    }
    printf("Merged array from 2 arrays is as follows:\n");
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr_c[i]);
    }
    return 0;
}

// Solutions provided by instructor --> Remove /* */ to use the below solution.

/*
#include <stdio.h>
int main()
{
    int arr1[20], arr2[20], array_new[40], n1, n2, size, i;
    //  n1 size of first array (i.e. arr1[]), n2 size of second array(i.e. arr2[]),
    //    size is the total size of the new array (array_new[])

    scanf("%d", &n1); //Get the size of first array from test data and store it in n1.

    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]); //Accepts the values for first array

    scanf("%d", &n2); //Get the size of second array from test data and store it in n2.

    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]); //Accepts the values for second array

    //Marge two arrays
    int j;
    for (i = 0; i < n1; ++i)
        array_new[i] = arr1[i];

    size = n1 + n2;

    for (i = 0, j = n1; j < size && i < n2; ++i, ++j)
        array_new[j] = arr2[i];


    //Printing after merging

    for (i = 0; i < size; i++)
    {
        printf("%d\n", array_new[i]);
    }
}
*/